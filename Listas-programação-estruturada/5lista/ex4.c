#include <stdio.h>
#include <stdlib.h>
// para  armazenar  o  nome  de  uma  comida,  o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 3.

struct dieta {
  char nome_comida[25];
  float peso, calorias;
};

struct dieta solicita_dados(struct dieta die);

int main() {
  int k=0;
  char continuar;
  struct dieta die[10][4];

  do {
    die[1][k]=solicita_dados(die[1][k]);
    printf("\nDeseja continuar? \n1 para sim\n2 para nao\n");
    fflush(stdin);
    scanf("%i", &continuar);
    system("cls");
    k++;
  } while(continuar!=2);

  for(int j=0; j<k; j++){
    printf("Nome da comida:  %s\n", die[1][j].nome_comida);
    printf("Peso :  %f\n", die[1][j].peso);
    printf("Calorias :  %f\n\n", die[1][j].calorias);
  }

  return 0;
}

struct dieta solicita_dados(struct dieta die){
  printf("Digite o nome da comida: ");
  fflush(stdin);
  gets(die.nome_comida);
  printf("Digite o peso: ");
  scanf("%f", &die.peso);
  printf("Digite as calorias: ");
  scanf("%f", &die.calorias);
  return die;
}
