#include <stdio.h>

void verificar(int *verifica, int vetor);
int main() {
  int vetor, i;
  printf("Digite a quantidade de elementos: ");
  fflush(stdin);
  scanf("%d", &vetor);
  int numeros[vetor];
  for (i = 0; i < vetor; i++){
    printf("Digite o numero do elemento: ");
    fflush(stdin);
    scanf("%i", &numeros[i]);
  }
  verificar(numeros, vetor);
  return 0;
}

void verificar(int *verifica, int vetor){
  int maior, i,qtd=1;
  maior=verifica[0];

  for ( i = 1; i < vetor; i++) {
    if(maior >= verifica[i]){
      if(maior==verifica[i]){
      qtd++;
      }
    }
    else{
      maior=verifica[i];
      qtd=1;
    }
  }
  printf("\nMaior numeor: %i, quantidade: %i\n", maior, qtd);
}
