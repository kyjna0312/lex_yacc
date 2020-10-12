짜잔~ 완성됐습니다~

일단 실행방법은 이렇숩니다
makefile을 만들어뒀기때문에 편하게 하시면 됩니다.
***makefile에서 test 라고 쓴 부분은 실행파일명을 정해주는 부분이기 때문에 바꾸셔도 됨니다.***

1. make
이거 하면 lex lex.l // yacc -d kim.y가 실행되기 때문에 lex.yy.c // y.tab.c // y.tab.h가 생성되고
gcc -o test y.tab.c lex.yy.c 가 실행되기 때문에 실행파일인 test가 만들어집니다.

2. make run < (main함수가 포함된 파일명)
이거 하면 파일에 있는 c 프로그램이 올바른 c 문법으로 작성됐는지 yyparse()를 통해 확인합니다.
성공하면 "yyparse() Success"가 실패히면 "ERROR"가 출력됩니다.
***(출력되는 내용을 바꾸려면 kim.y의 main함수쪽을 수정하시면 됩니다)***

성공하는 사례와 실패하는 사례 둘다 보여주기 위해 main함수는 한사람당 두개! (이름 바꿔도 됩니다)
1) test_success.c랑 test_error.c
2) yyparse_s.c랑 yyparse_error.c
3) success.c랑 failed.c

***main함수는 진짜 막 적은 엄청 짧은 코드라 수정하셔도 됨니다.***
