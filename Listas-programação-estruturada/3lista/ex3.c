// Sintese
// Objetivo : Receber nomes e mostrar seus tamanhos;
// Entrada : 5 nomes;
// Saída : Tamnaho do nome;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nome[5][10], sobrenome[5][10];
  int i, tamanho, tamanhoS, tamanhoTotal;

  for (i=0; i<5; i++){
    printf("Digite o nome:\n");
    fflush(stdin);
    gets(nome[i]);
    tamanho=strlen(nome[i]);
    printf("Digite o sobrenome: ");
    fflush(stdin);
    gets(sobrenome[i]);
    tamanhoS=strlen(sobrenome[i]);
    tamanhoTotal=(tamanho+tamanhoS);
    printf("%i Esse e o tamanho \n", tamanhoTotal);
  }

  return 0;
}
