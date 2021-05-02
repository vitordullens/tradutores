#ifndef TAC
#define TAC

typedef struct tac tac;

struct tac {
  int tabela;
  char* instrucao;
};

void escreveTac();

#endif