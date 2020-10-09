%{
	#include "type.h"

	extern int line_no, syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type;
%}

%start program
%token IDENTIFIER TYPE_IDENTIFIER FLOAT_CONSTANT INTEGER_CONSTANT SHARACTER_CONSTANT STRING_LITERAL PLUS MINUS PLUSPLUS MINUSMINUS BAR AMP BARBAR AMPAMP ARROW SEMICOLON LSS GTR LEQ GEQ EQL NEQ DOTDOTDOT LP RP LB RB LR RR PERIOD COMMA EXCL STAR SLASH PERCENT ASSIGN COLON AUTO_SYM STATIC_SYM TYPEDEF_SYM STRUCT_SYM ENUM_SYM SIZEOF_SYM UNION_SYM IF_SYM ELSE_SYM WHILE_SYM DO_SYM FOR_SYM CONTINUE_SYM BREAK_SYM RETURN_SYM SWITCH_SYM CASE_SYM DEFAULT_SYM
%%

program:
translation_unit {root=makeNode(N_PROGRAM, NIL, $1, NIL); checkForwardReference();}
;

translation_unit:
external_declaration {$$=$1;}
|translation_unit external_declaration {$$=linkDeclaratorList($1, $2);}
;

external_declaration:
function_definition {$$=$1;}
|declaration {$$=$1;}
;

function_definition:
declaration_specifiers declarator{$$=setFunctionDeclaratorSpecifier($2, $1);} compound_statement{$$=setFunctionDeclaratorBody($3, $4);}
|declator{$$=setFunctionDeclaratorSpecifire($1, makeSpecifier(int_type, 0));} compound_statement{$$=setFunctionDeclaratorBody($2, $3);}
;

declatation_list_opt:
{$$=NIL;}
|declaration_list {$$=$1;}
;

declaration_list:
declaration {$$=$1;}
|declaration_list declaration {$$=linkDeclaratorLisr($1, $2);}
;

declaration:
declaration_specifiers init_declarator_list_opt SEMICOLON {$$=setDeclaratorListSpecifier($2, $1);}
;

storage_class_specifier:
type_specifier {$$=makeSpecifier($1, 0);}
|storage_class_specifier {$$=makeSpecifier(0, $1);}
|type_specifier declaration_specifiers {$$=updateSpecifier($2, $1, 0);}
|storage_class_specifire delaration_specifiers {$$=updateSpecifire($2, 0, $1);}
;

storage_class_specifier:
AUTO_SYM {$$=S_AUTO;}
|STATIC_SYM {$$=S_STATIC;}
|TYPEDEF_SYM {$$=S_TYPEDEF;}
;

init_declarator_list_opt:
{$$=makeDummyIdentifier();}
|init_declarator_list COMMA init_declarator_list {$$=$1;}
;

init_declarator_list:
init_declarator {$$=$1;}
|init_declarator_list COMMA init_declarator {$$=linkDeclaratorList($1, $3);}
;

init_declarator:
declarator {$$=$1;}
|declarator ASSIGN initializer {$$=setDeclaratorInit($1, $3);}
;

initializer:
constant_expression {$$=makeNode(N_INIT_LIST_ONE, NEL, $1, NIL);}
|LR initializer_list RR {$$=$2;}
;

initializer_list:
initializer {$$=makeNode(N_INIT_LIST, $1, NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
|initializer_list COMMMA initializer {$$-makeNodeList(N_INIT_LIST, $1, $3);}
;

type_specifier:
struct_type_specifier {$$=$1;}
|enum_type_specifier {$$=$1;}
|TYPE_IDENTIFIER {$$=$1;}
;

struct_type_specifier:
struct_or_union IDENTIFIER {$$=setTypeStructOrEnumIdentifier($1, $2, ID_STRUCT);} LR {$$=current_id; current_level++;} struct_declaration)list RR {checkForwardReference(); $$=setTypeField($3, $6); current_level--; current_id=$5;}
|struct_or_union {$$=maketype($1);} LR{$$=current_id;current_level++;} struct_declaration_list RR {checkForwardReference(); $$=setTypeField($2,$5); current_level--; current_id=$4;}
|struct_or_union IDENTIFIER {$$=getTypeOfStructOrEnumRefIdentifier($1, $2, ID_STRUCT);}
;

struct_or_union:
STRUCT_SYM {$$=T_STRUCT;}
|UNION_SYM {$$=Y_UNION;}
;

struct_declaration_list:
struct_declaration {$$=$1;}
|struct_declaration_list struct_declaration {$$=linkDeclaratorList($1, $2);}
;

struct_declaration:
type_specifier struct_declarator_list SEMICOLON {$$=setStructDeclaratorListSpecifier($2, $1);}
;

struct_declarator_list:
struct_declarator {$$=$1;}
|strruct_declator_list COMMA struct_declarator {$$=linkDeclaratorList($1, $3);}
;

struct_declarator:
declarator {$$=$1;}
;
