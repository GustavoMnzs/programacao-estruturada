// Sintese
// Objetivo : Receber um texto e deixar a primeira letra maiuscula, e contar as palavras;
// Entrada : Texto;
// Saída : Texto e quantidade de palavras;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

int main() {
  char texto[2000];
  int tamanho, qtdPalavras=1;

  printf("Digite o texto: \n");
  gets(texto);
  tamanho=strlen(texto);
  texto[0]=toupper(texto[0]);
  for (int i = 1; i < tamanho; i++) {
    texto[i]=tolower(texto[i]);
  }
  for(int k=0;texto[k]!= '\0'; k++ ) {
   if((texto[k] == ' ') && (texto[k+1] != ' ')) {
      qtdPalavras++;
   }
  }
  system("cls");
  printf("\n\n%s\n", texto);
  printf("\nQuantidade de palavras = %i\n", qtdPalavras);

  return 0;
}
