#ifndef TABELA
#define TABELA

typedef struct Escopo Escopo;
typedef struct Simbolo Simbolo;
typedef struct Token Token;

struct Escopo {
  int pilhaEscopo [1000000];
  int idx;
  int proximo;
};

struct Simbolo {
  int linha;
  int coluna;
  int ehFuncao;
  char* tipo;
  char* body;
  int escopo;
};

Simbolo criarSimbolo(int, int, char*);
Simbolo *criarSimboloArvore(int, int, char*);

int escopoAtual(Escopo*);
void adicionarEscopo(Escopo*);
void removerEscopo(Escopo*);

void printTabela(int);

#endif