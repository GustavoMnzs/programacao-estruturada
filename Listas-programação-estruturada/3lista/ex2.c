// Sintese
// Objetivo : Receber nome e idade de um aluno;
// Entrada : Idade e nome;
// Saída : Idade e nome;
#include <stdio.h>
#include <stdlib.h>

struct equipamento{
  char nomes[15];
};

void adicionar_nomes(struct equipamento *eqpmt);
void verificar_duplicidade(struct equipamento *eqpmt);

int main(void) {
  struct equipamento eqpmt[5];
  adicionar_nomes(eqpmt);
  verificar_duplicidade(eqpmt);
  return 0;
}

void adicionar_nomes(struct equipamento *eqpmt){
  for (int i=0; i<5; i++){
    printf("Digite o nome do equipamento %i : \n", i+1);
    gets(eqpmt[i].nomes);
  }
  system("cls");
}

void verificar_duplicidade(struct equipamento *eqpmt){
  int indice=0, i;
  for (i=indice; i<5; i++){
    if (stricmp(eqpmt[indice].nomes,eqpmt[i+1].nomes)==0) {
      printf("O equipamento (%s) esta duplicado!\n", eqpmt[indice].nomes);
    }
    indice++;
  }
}
