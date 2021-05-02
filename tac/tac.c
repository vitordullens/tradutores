#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tac.h"
#include "arvore.h"

void escreveTabela(NodoArvore *nodo) {
   if (nodo == NULL) {
    return;
  }
}

void escreveTac(NodoArvore *nodo){
   FILE *fp;
   fp = fopen("output_tac/output.tac", "w");
   fprintf(fp, "This is testing for fprintf....\n");
   fclose(fp);
}