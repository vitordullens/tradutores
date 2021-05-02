#ifndef ARVORE
#define ARVORE

#include "tabela.h"
#include "tac.h"

typedef struct NodoArvore NodoArvore;

void printArvore(NodoArvore*, int);
void freeArvore(NodoArvore *);

struct NodoArvore {
  struct NodoArvore* filho;
  Simbolo* simbolo;
  char val[100];
  int isIdorConst;
  char *tipo;
  char *cast;
  struct NodoArvore* proximo;
};

NodoArvore* retornaNodo();
Simbolo *criarSimboloArvore(int, int, char*, int);
void fazCast(NodoArvore*, NodoArvore*, int*, int, int);
void forcaCast(char*, NodoArvore*, int*, int, int);

#endif