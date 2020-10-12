%{
	#include <stdio.h>
	extern int line_no;
	extern int yylex(void);
	extern char *yytext;
	int yyerror(char *s) { printf("line %d: %s near %s\n", line_no, s, yytext); }
%}

%start program
%token	AUTO_SYM BREAK_SYM CASE_SYM CONTINUE_SYM DEFAULT_SYM DO_SYM ELSE_SYM
		ENUM_SYM FOR_SYM IF_SYM RETURN_SYM SIZEOF_SYM STATIC_SYM STRUCT_SYM
		SWITCH_SYM TYPEDEF_SYM UNION_SYM WHILE_SYM

		INTEGER_CONSTANT FLOAT_CONSTANT CHARACTER_CONSTANT STRING_LITERAL
		IDENTIFIER TYPE_IDENTIFIER

		PLUS MINUS MUL DIV MOD SEMICOLON COLON LP RP DLP DRP SLP SRP COMMA EQUAL NOTEQUAL ASSIGN
		DOT ARROW PLUSPLUS MINUSMINUS LT LTE GT GTE NOT AND ANDAND OR OROR ELLIPSIS

/* SYMBOL
	PLUS : "+", MINUS : "-", MUL : "*", DIV : "/", MOD : "%", SEMICOLON : ";", COLON : ":",
	LP : "(", RP : ")", DLP : "{", DRP : "}", SLP : "[", SRP : "]", COMMA : ",", EQUAL : "==",
	NOTEQUAL : "!=", ASSIGN : "=", DOT : ".", ARROW : "->", PLUSPLUS : "++", MINUSMINUS : "--",
	LT : "<", GT : ">", LTE : "<=", GTE : ">=", NOT : "!", AND : "&", ANDAND : "&&" OR : "|",
	OROR : "||", ELLIPSIS : "..."
 */

%%
program						: translation_unit;

translation_unit			: external_declaration
							| translation_unit external_declaration;

external_declaration		: function_definition
							| declaration;

function_definition			: declaration_specifiers declarator compound_statement
							| declarator compound_statement;

declaration					: declaration_specifiers SEMICOLON
							| declaration_specifiers init_declarator_list SEMICOLON;

declaration_specifiers		: type_specifier
							| storage_class_specifier
							| type_specifier declaration_specifiers
							| storage_class_specifier declaration_specifiers;

storage_class_specifier		: AUTO_SYM
							| STATIC_SYM
							| TYPEDEF_SYM;

init_declarator_list		: init_declarator
							| init_declarator_list COMMA init_declarator;

init_declarator				: declarator
							| declarator ASSIGN initializer;

type_specifier				: struct_specifier 
							| enum_specifier
							| TYPE_IDENTIFIER;

struct_specifier			: struct_or_union IDENTIFIER DLP struct_declaration_list DRP
							| struct_or_union DLP struct_declaration_list DRP
							| struct_or_union IDENTIFIER;

struct_or_union				: STRUCT_SYM
							| UNION_SYM;

struct_declaration_list		: struct_declaration
							| struct_declaration_list struct_declaration;

struct_declaration			: type_specifier struct_declarator_list SEMICOLON;

struct_declarator_list		: struct_declarator
							| struct_declarator_list COMMA struct_declarator;

struct_declarator			: declarator;

enum_specifier				: ENUM_SYM IDENTIFIER DLP enumerator_list DRP
							| ENUM_SYM DLP enumerator_list DRP
							| ENUM_SYM IDENTIFIER;

enumerator_list				: enumerator
							| enumerator_list COMMA enumerator;

enumerator					: IDENTIFIER
							| IDENTIFIER ASSIGN constant_expression;

declarator					: pointer direct_declarator
							| direct_declarator;

pointer						: MUL
							| MUL pointer;

direct_declarator			: IDENTIFIER
							| LP declarator RP
							| direct_declarator SLP constant_expression_opt SRP
							| direct_declarator LP parameter_type_list_opt RP;

constant_expression_opt		: constant_expression
							| /* empty */;

parameter_type_list_opt		: parameter_type_list
							| /* empty */;

parameter_type_list			: parameter_list
							| parameter_list COMMA ELLIPSIS;

parameter_list				: parameter_declaration
							| parameter_list COMMA parameter_declaration;

parameter_declaration		: declaration_specifiers declarator
							| declaration_specifiers abstract_declarator
							| declaration_specifiers;

abstract_declarator			: pointer
							| direct_abstract_declarator
							| pointer direct_abstract_declarator;

direct_abstract_declarator	: LP abstract_declarator RP
							| SLP constant_expression_opt SRP
							| LP parameter_type_list_opt RP
							| direct_abstract_declarator SLP constant_expression_opt SRP
							| direct_abstract_declarator LP parameter_type_list_opt RP;

initializer					: constant_expression
							| DLP initializer_list DRP;

initializer_list			: initializer
							| initializer_list COMMA initializer;

statement					: labeled_statement
							| compound_statement
							| expression_statement
							| selection_statement
							| iteration_statement
							| jump_statement;

labeled_statement			: CASE_SYM constant_expression COLON statement
							| DEFAULT_SYM COLON statement
							| IDENTIFIER COLON statement;

compound_statement			: DLP declaration_list statement_list DRP;

declaration_list			: declaration_list declaration
							| /* empty */;

statement_list				: statement_list statement
							| /* empty */;

expression_statement		: SEMICOLON
							| expression SEMICOLON;

selection_statement			: IF_SYM LP expression RP statement
							| IF_SYM LP expression RP statement ELSE_SYM statement
							| SWITCH_SYM LP expression RP statement;

iteration_statement			: WHILE_SYM LP expression RP statement
							| DO_SYM statement WHILE_SYM LP expression RP SEMICOLON
							| FOR_SYM LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP statement;

expression_opt				: expression
							| /* empty */;

jump_statement				: RETURN_SYM expression_opt SEMICOLON
							| CONTINUE_SYM SEMICOLON
							| BREAK_SYM SEMICOLON;

primary_expression			: IDENTIFIER
							| INTEGER_CONSTANT
							| FLOAT_CONSTANT
							| CHARACTER_CONSTANT
							| STRING_LITERAL
							| LP expression RP;

postfix_expression			: primary_expression
							| postfix_expression SLP expression SRP
							| postfix_expression LP arg_expression_list_opt RP
							| postfix_expression DOT IDENTIFIER
							| postfix_expression ARROW IDENTIFIER
							| postfix_expression PLUSPLUS
							| postfix_expression MINUSMINUS;

arg_expression_list_opt		: arg_expression_list
							| ;

arg_expression_list			: assignment_expression
							| arg_expression_list COMMA assignment_expression

unary_expression			: postfix_expression
							| PLUSPLUS unary_expression
							| MINUSMINUS unary_expression
							| AND unary_expression
							| MUL unary_expression
							| NOT unary_expression
							| MINUS unary_expression
							| PLUS unary_expression
							| SIZEOF_SYM unary_expression
							| SIZEOF_SYM LP type_name RP;

cast_expression				: unary_expression
							| LP type_name RP cast_expression;

type_name					: declaration_specifiers
							| declaration_specifiers abstract_declarator;

multiplicative_expression	: cast_expression
							| multiplicative_expression MUL cast_expression
							| multiplicative_expression DIV cast_expression
							| multiplicative_expression MOD cast_expression;

additive_expression			: multiplicative_expression
							| additive_expression PLUS multiplicative_expression
							| additive_expression MINUS multiplicative_expression;

relational_expression		: additive_expression
							| relational_expression LT additive_expression
							| relational_expression GT additive_expression
							| relational_expression LTE additive_expression
							| relational_expression GTE additive_expression;

equality_expression			: relational_expression
							| equality_expression EQUAL relational_expression
							| equality_expression NOTEQUAL relational_expression;

logical_and_expression		: equality_expression
							| logical_and_expression ANDAND equality_expression;

logical_or_expression		: logical_and_expression
							| logical_or_expression OROR logical_and_expression;

assignment_expression		: logical_or_expression
							| unary_expression ASSIGN assignment_expression;

constant_expression			: expression;

expression					: assignment_expression;

%%


int main(void) {
	int result;

	result = yyparse();
	//printf("%d\n", result);

	if(result == 0)
		printf("success!!\n");
	else
		printf("error!!\n");
}

