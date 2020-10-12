digit		[0-9]
letter		[a-zA-Z]
delim		[ \t]
line		[\n]
ws			{delim}+

%{
#include "y.tab.h"
int line_no=1;
int checkIdentifier(char*);
%}

%%
{ws}						{ }
{line}						{ line_no++; }
auto						{ return(AUTO_SYM); }
break						{ return(BREAK_SYM); }
case						{ return(CASE_SYM); }
continue					{ return(CONTINUE_SYM); }
default						{ return(DEFAULT_SYM); }
do							{ return(DO_SYM); }
else						{ return(ELSE_SYM); }
enum						{ return(ENUM_SYM); }
for							{ return(FOR_SYM); }
if							{ return(IF_SYM); }
return						{ return(RETURN_SYM); }
sizeof						{ return(SIZEOF_SYM); }
static						{ return(STATIC_SYM); }
struct						{ return(STRUCT_SYM); }
switch						{ return(SWITCH_SYM); }
typedef						{ return(TYPEDEF_SYM); }
union						{ return(UNION_SYM); }
while						{ return(WHILE_SYM); }

"\+"						{ return(PLUS); }
"\-"						{ return(MINUS); }
"\*"						{ return(MUL); }
"\/"						{ return(DIV); }
"\%"						{ return(MOD); }
"\;"						{ return(SEMICOLON); }
"\:"						{ return(COLON); }
"\("						{ return(LP); }
"\)"						{ return(RP); }
"\{"						{ return(DLP); }
"\}"						{ return(DRP); }
"\["						{ return(SLP); }
"\]"						{ return(SRP); }
"\,"						{ return(COMMA); }
"\=\="						{ return(EQUAL); }
"\!\="						{ return(NOTEQUAL); }
"\="						{ return(ASSIGN); }
"\."						{ return(DOT); }
"\-\>"						{ return(ARROW); }
"\+\+"						{ return(PLUSPLUS); }
"\-\-"						{ return(MINUSMINUS); }
"\<"						{ return(LT); }
"\>"						{ return(GT); }
"\<\="						{ return(LTE); }
"\>\="						{ return(GTE); }
"\!"						{ return(NOT); }
"\&"						{ return(AND); }
"\&\&"						{ return(ANDAND); }
"\|"						{ return(OR); }
"\|\|"						{ return(OROR); }
"\.\.\."					{ return(ELLIPSIS); }

{digit}+					{ return(INTEGER_CONSTANT); }
{digit}+\.{digit}+			{ return(FLOAT_CONSTANT); }
\"([^"\n]|\\["\n])*\"		{ return(STRING_LITERAL); }
\'([^'\n]|\'\')\'			{ return(CHARACTER_CONSTANT); }
{letter}({letter}|{digit})* { return(checkIdentifier(yytext)); }
%%

#include <string.h>

int yywrap() {return 1;}

int checkIdentifier(char *s) {
	char *table[] = { "int", "float", "char", "void" };

	for(int i = 0; i < sizeof(table)/sizeof(char*); i++) {
		if(strcmp(table[i], s) == 0) return(TYPE_IDENTIFIER);
	}

	return IDENTIFIER;
}
