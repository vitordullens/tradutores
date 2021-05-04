#ifndef TAC
#define TAC

#include "arvore.h"


void escreveTac(NodoArvore*);
char *variavel_escopo(char*, int);
char* getFreeRegTemp();
Tac* criarTac(char*, char*, char*, char*,  int);

#endif