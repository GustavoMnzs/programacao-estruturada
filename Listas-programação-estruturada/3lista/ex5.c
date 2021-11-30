#include <stdio.h>

int main() {
  char nome[10],Sobrenome[10], meioNome[10];

  printf("Digite o nome: ");
  gets(nome);
  printf("Digite o nome do meio: ");
  gets(meioNome);
  printf("Digite o ultimo nome: ");
  gets(Sobrenome);

  printf("%s\\%s\n", Sobrenome,nome);
  return 0;
}
