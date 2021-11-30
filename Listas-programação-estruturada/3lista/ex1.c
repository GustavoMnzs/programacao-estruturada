// Sintese
// Objetivo : Ler nomes de pessoas e apresentar em letras maiúsculas ou minúsculas;
// Entrada : Nome e resto do nome;
// Saída : Nome, maiúsculo ou minúsculo;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nomes{
  char P_nome[10], M_nome[50];
};

void adicionar_nomes(struct nomes *name);
void apresentarNomes(struct nomes *name);

int main(void) {
  struct nomes name[10];
  adicionar_nomes(name);
  apresentarNomes(name);
  return 0;
}

int k;

void adicionar_nomes(struct nomes *name){
  int opcao, indice=2;
  for (int i=0; i < 2; i++){
    printf("Digite primeiro nome: ");
    gets(name[i].P_nome);
    printf("Digite o resto do nome: ");
    gets(name[i].M_nome);
  }
  do {
    printf("\nDeseja continuar?\n 1=> Sim\n 2=> Nao \n");
    scanf("%i", &opcao);
    switch (opcao) {
      case 1:
        printf("Digite primeiro nome: ");
        fflush(stdin);
        gets(name[indice].P_nome);
        printf("Digite o resto do nome: ");
        gets(name[indice].M_nome);
        indice++;
      break;
    }
  } while(opcao!= 2);
  k=indice-1;
  system("cls");
}

void apresentarNomes(struct nomes *name){
  for (int j=0; j<k; j=j+2){
    for (int i=0; i<10; i++){
      name[j].P_nome[i]=toupper(name[j].P_nome[i]);
      name[j+1].P_nome[i]=tolower(name[j+1].P_nome[i]);
    }
    printf("\n    %s", name[j].P_nome);
    printf("\n    %s", name[j+1].P_nome);
  }
}
