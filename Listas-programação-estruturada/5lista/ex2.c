#include <stdio.h>
#include <stdlib.h>

struct aluno{
  char nome[20],nMatricula[10];
};

struct dados{
  int serie;
  char turma;
  char anoNascimento[10], naturalidade[15];
};

struct notas {
  float media;
  char sexo[10], aprovado[10];
};

struct aluno adicionar(struct aluno alu);
struct dados adicionar2(struct dados dad);
struct notas adicionar3(struct notas not);

int main() {
  int k=0, continuar;
  struct aluno alu[10][1];
  struct dados dad[10][2];
  struct notas not[10][3];

  do {
    alu[1][k]=adicionar(alu[1][k]);
    dad[1][k]=adicionar2(dad[1][k]);
    not[1][k]=adicionar3(not[1][k]);
    printf("\nDeseja continuar? \n1 para sim\n2 para nao\n");
    fflush(stdin);
    scanf("%i", &continuar);
    system("cls");
    k++;
  } while(continuar!=2);

  for(int j=0; j<k; j++){
    printf("Nome:   %s\n", alu[1][j].nome);
    printf("Serie:  %s\n", alu[1][j].nMatricula);
    printf("Turma:  %c\n", dad[1][j].turma);
    printf("Ano:    %s\n", dad[1][j].anoNascimento);

  }

  return 0;
}

struct aluno adicionar(struct aluno alu){
  printf("Digite o nome: ");
  fflush(stdin);
  gets(alu.nome);
  printf("Digite a matricula: ");
  fflush(stdin);
  gets(alu.nMatricula);
  return alu;
}

struct dados adicionar2(struct dados dad){
  printf("Digite a serie: ");
  scanf("%i", &dad.serie);
  printf("Digite a Turma: ");
  fflush(stdin);
  scanf("%c", &dad.turma);
  printf("Digite o ano de nascimento: ");
  fflush(stdin);
  gets(dad.anoNascimento);
  printf("Digite a naturalidade: ");
  fflush(stdin);
  gets(dad.naturalidade);
  return dad;
}

struct notas adicionar3(struct notas not){
  printf("Digite a media: ");
  fflush(stdin);
  scanf("%f", &not.media);
  printf("Digite o sexo: ");
  fflush(stdin);
  gets(not.sexo);
  printf("Digite o se foi aprovado: ");
  fflush(stdin);
  gets(not.aprovado);
  return not;
}
