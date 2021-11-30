#include <stdio.h>

int ordenacao(int *num_pont);

int main(void) {
  int num[3], i;

  for (i=0; i<3; i++){
    printf("Digite o valor ");
    switch (i) {
      case 0:
        printf("para A: ");
        break;
      case 1:
        printf("para B: ");
        break;
      case 2:
        printf("para C: ");
        break;
    }
    scanf("%i", &num[i]);
  }
  ordenacao(num);

  return 0;
}

int ordenacao(int *num_pont){
  int i, k, aux;

  for(i=0; i<3-1; i++){
    for (k=0; k<3-1; k++){
      if(num_pont[k+1]>num_pont[k]){
        aux = num_pont[k+1];
        num_pont[k+1]=num_pont[k];
        num_pont[k]=aux;
      }
    }
  }

  for (i=0; i<3; i++){
    switch (i) {
      case 0:
        printf("\nValor de A: %i\n", *num_pont);
        break;
      case 1:
        printf("Valor de B: %i\n", *num_pont);
        break;
      case 2:
        printf("Valor de C: %i\n", *num_pont);
        break;
    }
    num_pont++;
  }
}
