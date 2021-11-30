#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct veiculo {
  char proprietario[10], combustivel, modelo[10], cor[10], placa[7];
  int chassi, ano;
};

struct no {
  struct veiculo dados;
  struct no *prox;
};

void menu();
void incluir(struct no **lista, struct no *novo);
void imprimir (struct no *imprimir);
void imprimir2 (struct no *imprimir);
void imprimir3 (struct no *imprimir);
struct no *editar(struct no *lista);
struct no *editar2(struct no *edicao);

int main() {
  struct no *novo, *edicao, *lista=NULL;
  int opcao;

  do {
    menu();
    scanf("%i", &opcao);
    fflush(stdin);
    system("cls");
    switch (opcao) {
      case 1:
        incluir(&lista, novo);
      break;
    }
  } while(opcao != 2);
  imprimir(lista);
  imprimir2(lista);
  imprimir3(lista);
  edicao=editar(lista);
  if (edicao!=NULL) {
    editar2(edicao);
  }
  return 0;
}

void menu(){
  printf("  |===MENU====|\n");
  printf("  |1 Adicionar|\n");
  printf("  |2 Parar    |\n");
  printf("  |===========|\n");
  printf("Escolha uma opcao: ");
}

void incluir(struct no **lista, struct no *novo){

  novo = malloc (sizeof (struct no));

  printf("Digite o proprietario:\n");
  fflush(stdin);
  gets(novo->dados.proprietario);
  printf("Digite o modelo:\n");
  fflush(stdin);
  gets(novo->dados.modelo);
  printf("Digite a cor:\n");
  fflush(stdin);
  gets(novo->dados.cor);
  printf("Combustivel (A)lcool, (D)iesel ou (G)asolina \n");
  scanf("%c", &novo->dados.combustivel);
  printf("Digite a placa:\n");
  fflush(stdin);
  gets(novo->dados.placa);
  printf("Digite o ano: \n");
  scanf("%i", &novo->dados.ano);
  printf("Digite o chassi: \n");
  scanf("%i", &novo->dados.chassi);

  novo->prox = *lista;
  *lista = novo;
  system("pause"); system ("cls");
}

void imprimir (struct no *imprimir){
  struct no *aux=imprimir;
  printf("Carros a diesel do ano de 2010 ou posterior:\n\n");
  while (aux != NULL) {
    if (aux->dados.ano>=2010 && aux->dados.combustivel=='D') {
      printf("Proprietario: %s\n", aux->dados.proprietario);

    }
    aux = aux->prox;
  }
  printf("\n------------------------------------------\n");
}

void imprimir2 (struct no *imprimir){
  struct no *aux=imprimir;

  printf("Placas que comecam com J e terminam \ncom 0, 2, 4 ou 7 e seus proprietarios:\n\n");
  while (aux != NULL) {
    if (aux->dados.placa[0]=='J'){
      if (aux->dados.placa[6]=='0'|| aux->dados.placa[6]=='2' || aux->dados.placa[6]=='4' || aux->dados.placa[6]=='7') {

        printf("Placa       : %s\n", aux->dados.placa);
        printf("Proprietario: %s\n", aux->dados.proprietario);
      }
    }
    aux = aux->prox;
  }
  printf("\n------------------------------------------\n");
}

void imprimir3 (struct no *imprimir){
  struct no *aux=imprimir;
  int numeroPlaca, numeroPlaca2, numeroPlaca3, numeroPlaca4, verifica2;
  float resto,verifica;

  printf("Modelo e cor dos veiculos cujas placas possuem \ncomo segunda letra uma vogal e cuja soma dos \nvalores numericos fornece um numero par:\n");
  while (aux != NULL) {
    if (aux->dados.placa[1]=='A'|| aux->dados.placa[1]=='E' || aux->dados.placa[1]=='I' || aux->dados.placa[1]=='O'|| aux->dados.placa[1]=='U'){

      switch (aux->dados.placa[3]) {
        case '0': numeroPlaca=0; break;
        case '1': numeroPlaca=1; break;
        case '2': numeroPlaca=2; break;
        case '3': numeroPlaca=3; break;
        case '4': numeroPlaca=4; break;
        case '5': numeroPlaca=5; break;
        case '6': numeroPlaca=6; break;
        case '7': numeroPlaca=7; break;
        case '8': numeroPlaca=8; break;
        case '9': numeroPlaca=9; break;
      }
      switch (aux->dados.placa[4]) {
        case '0': numeroPlaca2=0; break;
        case '1': numeroPlaca2=1; break;
        case '2': numeroPlaca2=2; break;
        case '3': numeroPlaca2=3; break;
        case '4': numeroPlaca2=4; break;
        case '5': numeroPlaca2=5; break;
        case '6': numeroPlaca2=6; break;
        case '7': numeroPlaca2=7; break;
        case '8': numeroPlaca2=8; break;
        case '9': numeroPlaca2=9; break;
      }
      switch (aux->dados.placa[5]) {
        case '0': numeroPlaca3=0; break;
        case '1': numeroPlaca3=1; break;
        case '2': numeroPlaca3=2; break;
        case '3': numeroPlaca3=3; break;
        case '4': numeroPlaca3=4; break;
        case '5': numeroPlaca3=5; break;
        case '6': numeroPlaca3=6; break;
        case '7': numeroPlaca3=7; break;
        case '8': numeroPlaca3=8; break;
        case '9': numeroPlaca3=9; break;
      }
      switch (aux->dados.placa[6]) {
        case '0': numeroPlaca4=0; break;
        case '1': numeroPlaca4=1; break;
        case '2': numeroPlaca4=2; break;
        case '3': numeroPlaca4=3; break;
        case '4': numeroPlaca4=4; break;
        case '5': numeroPlaca4=5; break;
        case '6': numeroPlaca4=6; break;
        case '7': numeroPlaca4=7; break;
        case '8': numeroPlaca4=8; break;
        case '9': numeroPlaca4=9; break;
      }

      verifica=(numeroPlaca+numeroPlaca2+numeroPlaca3+numeroPlaca4*0.5);
      verifica2=verifica;
      resto=(verifica-verifica2);

      if (resto == 0) {
        printf("\nModelo : %s \n", aux->dados.modelo);
        printf("Cor    : %s\n", aux->dados.cor);
      }
    }
    aux = aux->prox;
  }
  printf("\n------------------------------------------\n");

}

struct no *editar(struct no *lista){
  struct no *aux=lista;
  int chassi;
  char repetir='N';

  while (aux != NULL && repetir != 'S') {
    printf("\nDigite o chassi para troca de proprietario: \n");
    scanf("%i", &chassi);
    if (aux->dados.chassi==chassi) {
      if (aux->dados.placa[3]!='0' && aux->dados.placa[4]!='0' && aux->dados.placa[5]!= '0' && aux->dados.placa[5]!= '0' && aux->dados.placa[6]!='0'){
        return aux;
      }
      else{
        printf("Esse veiculo contem 0 em sua placa!\n");
        repetir='S';
        aux=lista;
        system("pause");
      }
    }
    aux=aux->prox;
  }
  return NULL;
}

struct no *editar2(struct no *edicao){
  printf("Digite o novo proprietario: \n");
  fflush(stdin);
  gets(edicao->dados.proprietario);
  return 0;
}
