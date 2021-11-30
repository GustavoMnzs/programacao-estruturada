#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produtos{
  char nome[10];
  float preco;
  int baixas;
};

struct no{
  struct produtos prod[4][6];
  struct no *prox;
};

void incluir(struct no **lista, struct no *novo){
  novo = malloc (sizeof (struct no));

  for( int i=0; i<4; i++){
    for (int j=0; j<6; j++){
      switch (j) {
        case 0: printf("Segunda |");break;
        case 1: printf("Terca   |");break;
        case 2: printf("Quarta  |");break;
        case 3: printf("Quinta  |");break;
        case 4: printf("Sexta   |");break;
        case 5: printf("Sabado  |");break;
      }
      printf("\n Digite o produto: ");
      fflush(stdin);
      gets(novo->prod[i][j].nome);
      printf(" Digite o preco: ");
      scanf("%f", &novo->prod[i][j].preco);
      printf(" Digite as baixas: ");
      scanf("%i", &novo->prod[i][j].baixas);
    }
  }

  novo->prox = *lista;
  *lista = novo;
}

int main (void){
  struct no *novo, *lista, *aux;

  int verificar;
  char produto[10];
  verificar=0;

  incluir(&lista,novo);
  aux=lista;

  for( int i=0; i<4; i++){
    for (int j=0; j<6; j++){
      if ((aux->prod[i][j].baixas) > verificar) {
          verificar=aux->prod[i][j].baixas;
        strcpy(produto, aux->prod[i][j].nome);
      }
    }
  }
  printf("O produto com mais baixa foi: %s\n com %i baixas", produto, verificar);

  return 0;
}
