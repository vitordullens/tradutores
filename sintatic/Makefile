all:
	bison syntax.y -Wcounterexamples
	flex lexical.l
	gcc syntax.tab.c lex.yy.c