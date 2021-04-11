#ifndef ARVORE
#define ARVORE

#include "tabela.h"

typedef struct NodoArvore NodoArvore;

void printArvore(NodoArvore*, int);
void freeArvore(NodoArvore *);

struct NodoArvore {
  struct NodoArvore* filho;
  Simbolo* simbolo;
  char val[100];
  int isIdorConst;
  struct NodoArvore* proximo;
};

NodoArvore* retornaNodo();
Simbolo *criarSimboloArvore(int, int, char*, int);

#endif