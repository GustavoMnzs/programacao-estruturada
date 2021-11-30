#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
  char nome[30],continuar;
  int tamanho, k=0;

  do {
    printf("Digite o nome completo: \n");
    gets(nome);
    tamanho=strlen(nome);

    for (int i = 0; i < tamanho; i++) {
      nome[i]=toupper(nome[i]);
    }

    system("cls");

  printf("                              %s\n", nome);
  printf("                              O tamanho do nome = %i\n\n\n", tamanho);

  printf("Desja adicionar outro nome?\n  S=>Sim \n  N=> Nao\n\n");
  scanf("%c", &continuar);
  if (continuar!= 'S') {
    while (k++ < 10) {
      Sleep(500);
      printf(".");
    }
  }

  } while(continuar=='S');

  return 0;
}
