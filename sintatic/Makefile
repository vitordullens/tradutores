all:
	bison sintatic.y -Wcounterexamples
	flex lexical.l
	gcc sintatic.tab.c lex.yy.c