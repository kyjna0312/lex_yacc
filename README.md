짜잔~ 완성됐습니다~

일단 실행방법은 이렇숩니다
makefile을 만들어뒀기때문에 편하게 하시면 됩니다.

1. make
이거 하면 lex lex.l // yacc -d kim.y가 실행되기 때문에 lex.yy.c // y.tab.c // y.tab.h가 생성되고
gcc -o test y.tab.c lex.yy.c 가 실행되기 때문에 실행파일인 test가 만들어집니다.

2. make run < (main함수가 포함된 파일명)
이거 하면 파일에 있는 c 프로그램이 올바른 c 문법으로 작성됐는지 yyparse()를 통해 확인합니다.
성공하면 "yyparse() Success"가 실패히면 "ERROR"가 출력됩니다.
