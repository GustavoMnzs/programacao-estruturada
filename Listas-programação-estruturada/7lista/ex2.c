#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

struct restaurante {
  char nome[15], endereco[20], tipo_comida[15];
  float precoMedio;
};

struct No{
  struct restaurante rest;
  struct No *prox;
};

void menu(){
  printf("\n______Menu______\n");
  printf("| 1=> Adicionar|\n| 2=> Listar   |\n| 0=> Sair     |\n-----------------\n");
  printf("Escolha uma opcao: ");
}

int main() {
  int opcao, k=0;
  struct No *novo, *imprimir, *lista=NULL;
  do {
    menu();
    fflush(stdin);
    scanf("%i", &opcao);
    system("cls");
    switch (opcao) {
      case 1:
        printf(" ____Incluir Restaurante___ \n");
        novo = malloc(sizeof(struct No));
        printf(" Digite o nome: ");
        fflush(stdin);
        gets(novo->rest.nome);
        printf(" Digite o endereco: ");
        gets(novo->rest.endereco);
        printf(" Digite o preco medio:  ");
        scanf("%f", &novo->rest.precoMedio);
        printf(" Digite o tipo de comida: ");
        fflush(stdin);
        gets(novo->rest.tipo_comida);
        system("cls");
        novo->prox = lista;
        lista = novo;
      break;
      case 2:
        imprimir = lista;
        while(imprimir != NULL){
          printf("  ___Listagem___\n");
          printf("  Nome: %s\n", imprimir->rest.nome);
          printf("  Endereco: %s\n", imprimir->rest.endereco);
          printf("  Preco medio: %f\n", imprimir->rest.precoMedio);
          printf("  Tipo de comida: %s\n", imprimir->rest.tipo_comida);
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
