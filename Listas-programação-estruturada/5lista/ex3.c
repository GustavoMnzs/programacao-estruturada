#include <stdio.h>
#include <stdlib.h>

struct restaurante {
  char nome[25], endereco[25], tipo_comida[25];
  float preco_medio;
};

int coluna=0;

struct restaurante solicita_dados(struct restaurante rest);
//void imprimir(struct restaurante *rest);

int main() {
  struct restaurante rest[10][4];
  int continuar, k=0;

  do {
    rest[1][k]=solicita_dados(rest[1][k]);
    printf("\nDeseja continuar? \n1 para sim\n2 para nao\n");
    fflush(stdin);
    scanf("%i", &continuar);
    system("cls");
    k++;
  } while(continuar!=2);

  //imprimir(rest[1][k]);
  for(int j=0; j<k; j++){
    printf("Nome:  %s\n", rest[1][j].nome);
    printf("Endereco:  %s\n", rest[1][j].endereco);
    printf("Tipo de comida:  %s\n", rest[1][j].tipo_comida);
    printf("Preco medio:  %f\n\n", rest[1][j].preco_medio);
  }
  return 0;
}

struct restaurante solicita_dados(struct restaurante rest){
  printf("Digite o nome: ");
  fflush(stdin);
  gets(rest.nome);
  printf("Digite o endereco: ");
  gets(rest.endereco);
  printf("Digite o tipo de comida: ");
  fflush(stdin);
  gets(rest.tipo_comida);
  printf("Digite o preco: ");
  scanf("%f", &rest.preco_medio);
  return rest;
}
/*
void imprimir(struct restaurante *rest[1][4]){
  for(int j=0; j<4; j++){
    printf("Nome:  %s", rest[1][j].nome);
    printf("Endereco:  %s", rest[1][j].endereco);
    printf("Tipo de comida:  %s", rest[1][j].tipo_comida);
    printf("Preco medio:  %f", rest[1][j].preco_medio);
  }
  printf("\n");
}*/
