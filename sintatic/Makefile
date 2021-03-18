all:
	bison -d syntax.y -Wcounterexamples
	flex lexical.l
	gcc -g syntax.tab.c lex.yy.c tabela.c arvore.c -Wall -ll