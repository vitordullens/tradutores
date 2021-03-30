all:
	bison -d syntax.y
	flex lexical.l
	gcc -g syntax.tab.c lex.yy.c tabela.c arvore.c -Wall -ll

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./a.out tests/success1.c