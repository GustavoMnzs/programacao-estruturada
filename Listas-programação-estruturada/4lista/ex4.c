#include <stdio.h>
#include <stdlib.h>

struct DadosAutomovel{
  char marca[20], modelo[10], cor[10];
  float motorizacao;
  int qtdPortas;
};

void armazena (struct DadosAutomovel *dados);
void imprimir (struct DadosAutomovel *dados);

int j=0;

int main() {
  struct DadosAutomovel dados[10];
  char opcao;
  do {
    printf("1=> Armazenar dados do veiculo\n2=> Mostrar dados armazenados\nEscolha uma opcao: ");
    scanf("%c", &opcao);
    system("cls");
    switch (opcao) {
      case '1':
      armazena(dados);
      break;
      case '2':
      imprimir(dados);
      break;
    }
  } while(j < 10);
  return 0;
}

void armazena (struct DadosAutomovel *dados){
  printf("Automovel %i\n", j+1);
  printf("Digite a marca: \n");
  fflush(stdin);
  gets(dados[j].marca);
  printf("Digite o modelo: \n");
  gets(dados[j].modelo);
  printf("Digite a cor: \n");
  fflush(stdin);
  gets(dados[j].cor);
  printf("Digite a motorizacao: \n");
  scanf("%f", &dados[j].motorizacao);
  printf("Digite a quantidade de portas: \n");
  scanf("%i", &dados[j].qtdPortas);
  system("pause");
  j++;
}

void imprimir(struct DadosAutomovel *dados){
  for(int i=0; i<j; i++){
    printf("Automovel %i\n", i+1);
    printf("Marca: %s\n", dados[i].marca);
    printf("Modelo: %s\n", dados[i].modelo);
    printf("Cor: %s\n", dados[i].cor);
    printf("Motorizacao: %.1f\n", dados[i].motorizacao);
    printf("Quantidade de portas: %i\n", dados[i].qtdPortas);
    printf("------------------------------------------\n");
  }
  system("pause");
}
