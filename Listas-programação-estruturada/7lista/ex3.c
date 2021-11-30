#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

struct dieta{
  char nome[15];
  float peso, calorias;
};

struct no {
  struct dieta die;
  struct no *prox;
};

void menu(){
  printf("\n______Menu______\n");
  printf("| 1=> Adicionar|\n| 2=> Listar   |\n| 0=> Sair     |\n-----------------\n");
  printf("Escolha uma opcao: ");
}

int main() {
  int opcao, k=0;
  struct no *novo,*imprimir, *lista=NULL;
  do {
    menu();
    scanf("%i", &opcao);
    switch (opcao) {
      case 1:
        printf(" ____Incluir Comida___ \n");
        novo = malloc(sizeof(struct no));
        printf(" Digite o nome: ");
        fflush(stdin);
        gets(novo->die.nome);
        printf(" Digite o peso: ");
        scanf("%f", &novo->die.peso);
        printf(" Digite as calorias: ");
        scanf("%f", &novo->die.calorias);

        system("cls");
        novo->prox = lista;
        lista = novo;
      break;
      case 2:
        imprimir = lista;
        while(imprimir != NULL){
          printf("  \n___Listagem___\n");
          printf("  Nome: %s\n", imprimir->die.nome);
          printf("  Peso: %.2f\n", imprimir->die.peso);
          printf("  Calorias: %.2f\n", imprimir->die.calorias);

          imprimir = imprimir->prox;
        }
        while (k++ < 10) {
          Sleep(2000);
          printf(".");
        }
        system("cls");
      break;
    }

  } while(opcao != 0);
  return 0;
}
