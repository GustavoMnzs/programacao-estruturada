#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco {
  char CEP[10], estado[10], cidade[10], bairro[10], rua[10];
};

struct cadastro{
  char sexo[10], nome[30], estadoCivil[10];
  int idade, identidade, cpf, telefone;
  float salario;
  struct endereco end;
};

void preencher (struct cadastro *cad);
void maiorIdade(struct cadastro *cad);
void sexoMasculino(struct cadastro *cad);
void maiorSlr(struct cadastro *cad);
void imprimir(struct cadastro *cad);

int j;

int main(void) {
  struct cadastro cad[5];
  for (int i=0; i<5; i++){
    preencher(cad);
  }

  maiorIdade(cad);
  sexoMasculino(cad);
  maiorSlr(cad);
  imprimir(cad);

  return 0;
}

void preencher (struct cadastro *cad){
  printf("Digite o nome: ");
  fflush(stdin);
  gets(cad[j].nome);
  printf("Digite a identidade: ");
  scanf("%i", &cad[j].identidade);
  printf("Digite o cpf: ");
  scanf("%i", &cad[j].cpf);
  printf("Digite o telefone: ");
  scanf("%i", &cad[j].telefone);
  printf("Digite a idade: ");
  scanf("%i", &cad[j].idade);
  printf("Digite o salario: ");
  scanf("%f", &cad[j].salario);
  printf("Digite o sexo: ");
  fflush(stdin);
  gets(cad[j].sexo);
  printf("Digite o estado civil: ");
  gets(cad[j].estadoCivil);
  printf("Digite o CEP: ");
  gets(cad[j].end.CEP);
  printf("Digite o estado: ");
  gets(cad[j].end.estado);
  printf("Digite a cidade: ");
  gets(cad[j].end.cidade);
  printf("Digite o bairro: ");
  gets(cad[j].end.bairro);
  printf("Digite a rua: ");
  gets(cad[j].end.rua);
  system("pause");
  system("cls");
  j++;
}

void maiorIdade(struct cadastro *cad){
  int maiorIdade;
  maiorIdade=cad[0].idade;
  for (int i=0; i<5; i++){
    if(cad[i].idade>maiorIdade)
      maiorIdade=cad[i].idade;
  }

  printf("Maior Idade: %i\n", maiorIdade);
}

void sexoMasculino(struct cadastro *cad){
  printf("\n_______________________________\n");
  printf("Pessoas do sexo masculino\n\n");
  for (int i=0; i<5; i++){
    if(stricmp(cad[i].sexo,"masculino")==0){
      printf("    Nome: %s\n", cad[i].nome);
      printf("    Identidade: %i\n", cad[i].identidade);
      printf("    Idade: %i\n", cad[i].idade);
      printf("-------------------------------\n");
    }
  }
}

void maiorSlr(struct cadastro *cad){
  printf("\n_________________________________\n");
  printf("Salrio maior que 1000\n");
  for (int i=0; i<5; i++){
    if(cad[i].salario > 1000){
      printf("    Nome: %s\n", cad[i].nome);
      printf("    Identidade: %i\n", cad[i].identidade);
      printf("    Salario: %.2f\n", cad[i].salario);
      printf("-------------------------------\n");
    }
  }
}

void imprimir(struct cadastro *cad){
  int busca, i;
  printf("\n_______________________________\n");
  printf("Digite a identidade para busca: \n");
  fflush(stdin);
  scanf("%i", &busca);
  system("cls");
  for (i=0; i<5; i++){
    if (busca==cad[i].identidade) {
      printf("    Nome: %s\n", cad[i].nome);
      printf("    Identidade: %i\n", cad[i].identidade);
      printf("    CPF: %i\n", cad[i].cpf);
      printf("    Telefone: %i\n", cad[i].telefone);
      printf("    Idade: %i\n", cad[i].idade);
      printf("    Salario: %.2f\n", cad[i].salario);
      printf("    Sexo: %s\n", cad[i].sexo);
      printf("    Estado civil: %s\n", cad[i].estadoCivil);
      printf("    CEP: %s\n", cad[i].end.CEP);
      printf("    Estado: %s\n", cad[i].end.estado);
      printf("    Cidade: %s\n", cad[i].end.cidade);
      printf("    Bairro: %s\n", cad[i].end.bairro);
      printf("    Rua: %s\n", cad[i].end.rua);
    }
  }
}
