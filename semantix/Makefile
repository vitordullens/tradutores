all:
	bison -d -g sintatico.y
	flex lexico.l
	gcc -g sintatico.tab.c lex.yy.c tabela.c arvore.c -Wall -ll

valgrind:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./a.out testes/sucesso1.c