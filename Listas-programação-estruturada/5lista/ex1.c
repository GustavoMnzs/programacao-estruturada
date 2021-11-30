#include <stdio.h>
#include <stdlib.h>

struct produtos{
  char nome[15];
  float preco;
  int baixas;
};

int main(void) {
  int vendas[4][6],vetor=0, maior, total=0;
  char opcao;
  struct produtos prod[10];

  do {
    printf("-----PRODUTOS-----\n");
    printf("1=>Para cadastrar: \n2=>Para parar: \n");
    fflush(stdin);
    scanf("%c", &opcao);
    system("cls");
    if (opcao=='1') {
      printf("Nome do produto: ");
      fflush(stdin);
      gets(prod[vetor].nome);
      printf("Preco do produto: ");
      scanf("%f", &prod[vetor].preco);

      for( int i=0; i<4; i++){
        for(int j=0; j<6; j++){
          printf("\nSemana %i | ", i+1);
          switch (j) {
            case 0:
              printf(" Segunda |");
            break;
            case 1:
              printf(" Terca   |");
            break;
            case 2:
              printf(" Quarta  |");
            break;
            case 3:
              printf(" Quinta  |");
            break;
            case 4:
              printf(" Sexta   |");
            break;
            case 5:
              printf(" Sabado  |");
            break;
          }
          printf(" Quantidade de baixas: ");
          scanf("%i", &vendas[i][j]);
          total= total+vendas[i][j];
        }
        printf("\n\n");
      }
      prod[vetor].baixas=total;
      printf("%i\n", prod[vetor].baixas);
      vetor++;
    }
  } while(opcao!='2');

  maior = 0;
  for (int i = 0; i < vetor; i++) {
    if (prod[i].baixas > maior) {
      maior=prod[i].baixas;
    }
  }

  for (int i = 0; i < vetor; i++) {
    if (prod[i].baixas==maior) {
      printf("Produto com mais baixa: \n");
      printf("Nome:       %s\n", prod[i].nome);
      printf("Preco:      %f\n", prod[i].preco);
      printf("Quantidade: %i\n", prod[i].baixas);
    }
  }

  return 0;
}
