#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
  char frase[50],nome[10];
  int k=0;

  printf("Digite a frase: ");
  gets(frase);
  printf("Digite o nome do candidato: ");
  gets(nome);
  for(int i=0; i<10; i++){
    nome[i]=toupper(nome[i]);
  }
  system("cls");
  printf("%s: %s\n",nome,frase);
  while (k++ < 10) {
    Sleep(1000);
    printf(".");
  }
  return 0;
}
