#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct endereco {
  char estado[30], cidade[30], rua[30], cep[30];
};

struct cadastro{
  char nome[30], email[30], sexo[15];
  double altura;
  int id;
  _Bool vacina;
  struct endereco end;
};

void Menu();
struct cadastro incluirUsuario(struct cadastro *cad);
void imprimir(struct cadastro *cad);
void buscarEmail(struct cadastro *cad);
void BuscarID(struct cadastro *cad);
void editar(struct cadastro *cad);
void Excluir(struct cadastro *cad);
char* validarSexo(char*sexoValido);
char* validarEmail(char*emailValido);
_Bool vacinaValidado(_Bool vacina);
double alturaValidada(double altura);
void ordenacao(struct cadastro *cad);

int j=0;

int main() {
  int opcao, sair, qtdCadastros;
  struct cadastro cad[1000], cad_backup[1000];
  do {
    Menu();
    fflush(stdin);
    scanf("%i", &opcao);
    system("cls");

    switch (opcao) {
    case 1:
    incluirUsuario(cad);
    break;
    case 2:
    editar(cad);
    break;
    case 3:
    Excluir(cad);
    break;
    case 4:
    BuscarID(cad);
    break;
    case 5:
    buscarEmail(cad);
    break;
    case 6:
    imprimir(cad);
    break;
    case 7:
    qtdCadastros=j;
    for(int i=0; i<j; i++){
      cad_backup[i]=cad[i];
    }
    break;
    case 8:
    for(int i=0; i<qtdCadastros; i++){
      cad[i]=cad_backup[i];
    }
    j=qtdCadastros;
    break;
    }
  } while(j < 1000);

  return 0;
}

void Menu(){
  printf(" ______________________________________\n");
  printf("|________|CADASTRO DE USUARIOS|________|\n");
  printf("|                                      |\n");
  printf("|     1-Incluir usuario;               |\n");
  printf("|                                      |\n");
  printf("|     2-Editar usuario;                |\n");
  printf("|                                      |\n");
  printf("|     3-Excluir usuario;               |\n");
  printf("|                                      |\n");
  printf("|     4-Buscar usuario pelo ID;        |\n");
  printf("|                                      |\n");
  printf("|     5-Buscar usuario pelo email;     |\n");
  printf("|                                      |\n");
  printf("|     6-Imprimir usuarios;             |\n");
  printf("|                                      |\n");
  printf("|     7-Fazer backup;                  |\n");
  printf("|                                      |\n");
  printf("|     8-Restaurar dados;               |\n");
  printf("|______________________________________|\n");
  printf("  Escolha uma opcao: ");
}

struct cadastro incluirUsuario(struct cadastro *cad){
  char repetir, tamanhoEmail[30], vacinado[5];
  ordenacao(cad);
  if (cad[0].id < 0) {
    cad[0].id = (cad[0].id * (-1)); // ID ficará positivo, substitui cadastro exlcuido
    printf("Usuario: %i\n", cad[0].id);
    printf("Digite o nome:\n");
    fflush(stdin);
    gets(cad[0].nome);
    strcpy(cad[0].email,validarEmail(cad[0].email));
    strcpy(cad[0].sexo,validarSexo(cad[0].sexo));
    printf("Digite o estado:\n");
    fflush(stdin);
    gets(cad[0].end.estado);
    printf("Digite a cidade:\n");
    fflush(stdin);
    gets(cad[0].end.cidade);
    printf("Digite a rua:\n");
    fflush(stdin);
    gets(cad[0].end.rua);
    printf("Digite o cep:\n");
    fflush(stdin);
    gets(cad[0].end.cep);
    cad[0].altura=alturaValidada(cad[0].altura);
    cad[0].vacina=vacinaValidado(cad[0].vacina);
    system("cls");
  }
  else{
    cad[j].id = rand() % 1000;
    printf("Usuario: %i\n", cad[j].id);
    printf("Digite o nome:\n");
    fflush(stdin);
    gets(cad[j].nome);
    strcpy(cad[j].email,validarEmail(cad[j].email));
    strcpy(cad[j].sexo,validarSexo(cad[j].sexo));
    printf("Digite o estado:\n");
    fflush(stdin);
    gets(cad[j].end.estado);
    printf("Digite a cidade:\n");
    fflush(stdin);
    gets(cad[j].end.cidade);
    printf("Digite a rua:\n");
    fflush(stdin);
    gets(cad[j].end.rua);
    printf("Digite o cep:\n");
    fflush(stdin);
    gets(cad[j].end.cep);
    cad[j].altura=alturaValidada(cad[j].altura);
    cad[j].vacina=vacinaValidado(cad[j].vacina);
    system("cls");
    j++;
  }
  return *cad;
}

void imprimir(struct cadastro *cad){

  for (int i=0; i < j; i++){
    if (cad[i].id > 0) { // Nao imprimi os cadastrados excluidos
      printf("         Usuario: %i\n", cad[i].id);
      printf("         Nome: %s\n",cad[i].nome);
      printf("         Email: %s\n", cad[i].email);
      printf("         Sexo: %s\n", cad[i].sexo);
      printf("         Estado: %s\n",cad[i].end.estado);
      printf("         Cidade: %s\n",cad[i].end.cidade);
      printf("         Rua: %s\n",cad[i].end.rua);
      printf("         CEP: %s\n",cad[i].end.cep);
      printf("         Altura: %.2f\n",cad[i].altura);
      printf("         Vacinado: ");
      switch (cad[i].vacina) {
       case 1:
       printf("Sim");
       break;
       case 0:
       printf("Nao");
       break;
     }
      printf("\n--------------------------------------------\n");
    }
  }
  system("pause");
  system("cls");
}

void buscarEmail(struct cadastro *cad) {
  char emailBusca[30],i=0;
  char repetir;
  printf("Digite o email: \n");
  fflush(stdin);
  gets(emailBusca);
  do {
    if (strcmp(emailBusca,cad[i].email)==0) {
      printf("         Usuario: %i\n", cad[i].id);
      printf("         Nome: %s\n",cad[i].nome);
      printf("         Email: %s\n", cad[i].email);
      printf("         Sexo: %s\n", cad[i].sexo);
      printf("         Estado: %s\n",cad[i].end.estado);
      printf("         Cidade: %s\n",cad[i].end.cidade);
      printf("         Rua: %s\n",cad[i].end.rua);
      printf("         CEP: %s\n",cad[i].end.cep);
      printf("         Altura: %.2f\n",cad[i].altura);
      printf("         Vacinado: ");
      switch (cad[i].vacina) {
       case 1:
       printf("Sim");
       break;
       case 0:
       printf("Nao");
       break;
      }
      printf("\n--------------------------------------------\n");
      }
      repetir='N';
    if ((i==j)&&(repetir!='N'))
      printf("Email invalido!\n");
    i++;
  } while(i<=j || strcmp(emailBusca,cad[i].email)==0);
  system("pause");
  system("cls");
}

void BuscarID(struct cadastro *cad){
  int esquerda, direita, meio, idBusca, id_n_encontrado;

  ordenacao(cad);

  printf("Digite o ID para busca: \n");
  scanf("%d", &idBusca);
  esquerda=0;
  direita=j;
  while(esquerda<=direita) {
   meio=(esquerda+direita)/2;
   if(cad[meio].id==idBusca){
     id_n_encontrado=0;
     printf("         Usuario: %i\n", cad[meio].id);
     printf("         Nome: %s\n",cad[meio].nome);
     printf("         Email: %s\n", cad[meio].email);
     printf("         Sexo: %s\n", cad[meio].sexo);
     printf("         Estado: %s\n",cad[meio].end.estado);
     printf("         Cidade: %s\n",cad[meio].end.cidade);
     printf("         Rua: %s\n",cad[meio].end.rua);
     printf("         CEP: %s\n",cad[meio].end.cep);
     printf("         Altura: %.2f\n",cad[meio].altura);
     printf("         Vacinado: ");
     switch (cad[meio].vacina) {
      case 1:
      printf("Sim");
      break;
      case 0:
      printf("Nao");
      break;
    }
     printf("\n--------------------------------------------\n");
    }
   if(cad[meio].id>idBusca)
     direita=meio-1;
   else
     esquerda=meio+1;
 }

 if (id_n_encontrado!=0)
  printf("ID nao encotrado!\n\n");

  system("pause");
  system("cls");
}

void editar(struct cadastro *cad){
  int idBusca,i,opcao,sair;
  printf("Digite o Id para editar\n");
  scanf("%i", &idBusca);
  system("cls");
  for (i = 0; i < j; i++) {
    if (idBusca == cad[i].id) {
      do {
        printf("  Nome: %s\n",cad[i].nome);
        printf("  Email: %s\n", cad[i].email);
        printf("  Sexo: %s\n", cad[i].sexo);
        printf("  Estado: %s\n",cad[i].end.estado);
        printf("  Cidade: %s\n",cad[i].end.cidade);
        printf("  Rua: %s\n",cad[i].end.rua);
        printf("  CEP: %s\n",cad[i].end.cep);
        printf("  Altura: %.2f\n",cad[i].altura);
        printf("  Vacinado: ");
        switch (cad[i].vacina) {
         case 1:
         printf("Sim");
         break;
         case 0:
         printf("Nao");
         break;
        }
        printf("\n--------------------\n");
        printf(" ____________________\n");
        printf("|_|Usuario: %i       |\n",cad[i].id);
        printf("|                    |\n");
        printf("|     1-Nome         |\n");
        printf("|     2-Email        |\n");
        printf("|     3-Sexo         |\n");
        printf("|     4-Estado       |\n");
        printf("|     5-Cidade       |\n");
        printf("|     6-Rua          |\n");
        printf("|     7-CEP          |\n");
        printf("|     8-Altura       |\n");
        printf("|     9-vacina       |\n");
        printf("|     0-todos        |\n");
        printf("|____________________|\n");
        printf("Escolha uma opcao para editar: ");
        scanf("%i", &opcao);
        switch (opcao) {
          case 1:
          printf("Digite o nome:\n");
          fflush(stdin);
          gets(cad[i].nome);
          break;
          case 2:
          strcpy(cad[i].email,validarEmail(cad[i].email));
          break;
          case 3:
          strcpy(cad[i].sexo,validarSexo(cad[i].sexo));
          break;
          case 4:
          printf("Digite o estado:\n");
          fflush(stdin);
          gets(cad[i].end.estado);
          break;
          case 5:
          printf("Digite a cidade:\n");
          fflush(stdin);
          gets(cad[i].end.cidade);
          break;
          case 6:
          printf("Digite a rua:\n");
          fflush(stdin);
          gets(cad[i].end.rua);
          break;
          case 7:
          printf("Digite o cep:\n");
          fflush(stdin);
          gets(cad[i].end.cep);
          break;
          case 8:
          cad[i].altura=alturaValidada(cad[i].altura);
          break;
          case 9:
          cad[i].vacina=vacinaValidado(cad[i].vacina);
          break;
          case 0:
          printf("Digite o nome:\n");
          fflush(stdin);
          gets(cad[i].nome);
          strcpy(cad[i].email,validarEmail(cad[i].email));
          strcpy(cad[i].sexo,validarSexo(cad[i].sexo));
          printf("Digite o estado:\n");
          fflush(stdin);
          gets(cad[i].end.estado);
          printf("Digite a cidade:\n");
          fflush(stdin);
          gets(cad[i].end.cidade);
          printf("Digite a rua:\n");
          fflush(stdin);
          gets(cad[i].end.rua);
          printf("Digite o cep:\n");
          fflush(stdin);
          gets(cad[i].end.cep);
          cad[i].altura=alturaValidada(cad[i].altura);
          cad[i].vacina=vacinaValidado(cad[i].vacina);
        }
        printf("\nDeseja continuar editando?\n1 para sim\n2 para nao\n");
        scanf("%i", &sair);
        system("cls");
      } while(sair==1);
      i=j;
    }
  }
}

void Excluir(struct cadastro *cad){
  int idBusca, l=0;
  char auxS[10], msg_n_encontrado;

  printf("Digite o ID para excluir\n");
  fflush(stdin);
  scanf("%i", &idBusca);

  do {
    if (idBusca==cad[l].id) {
      cad[l].id = (cad[l].id * (-1)); // O ID ficará com numero negativo e vai ser alocado nos primeiros indices do vetor
      strcpy(cad[l].email,"Email excluido");
      ordenacao(cad);
      msg_n_encontrado = 'n';
    }
  l++;
} while(l <= j || idBusca == cad[l].id);

  switch (msg_n_encontrado) {
    case 'n':
    break;
    default:
    printf("ID Invalido! \n\n");
  }
  msg_n_encontrado='s';
  system("pause");
  system("cls");
}

char* validarSexo(char*sexoValido){
  char repetir;
  do {
    printf("Digite o sexo (Feminino, Masculino, Nao declarar):\n");
    fflush(stdin);
    gets(sexoValido);
    if ((stricmp(sexoValido,"Feminino")==0) || (stricmp(sexoValido,"Masculino")==0) || (stricmp(sexoValido,"Nao declarar")==0))
      break;
    else{
      printf("Sexo Incorreto!!\n");
        repetir='S';
    }
  } while(repetir=='S');
  return sexoValido;
}

char* validarEmail(char*emailValido){
  char repetir;
  int tamanhoEmail, i;
  do {
      printf("Digite o email:\n");
      gets(emailValido);
      tamanhoEmail=strlen(emailValido);
      for (i = 0; i < tamanhoEmail; i++) {
        switch (emailValido[i]) {
          case '@':
          repetir='N';
        }
      }
      if (repetir!='N')
        printf("Email deve conter @!!\n");
  } while(repetir!='N');
  return emailValido;
}

_Bool vacinaValidado(_Bool vacina){
  char vacinado[5], repetir;
  do {
    printf("Ja vacinou? (Sim ou Nao)\n");
    fflush(stdin);
    gets(vacinado);
    if ((stricmp(vacinado,"Sim")==0)||(stricmp(vacinado,"Nao")==0))
      repetir='n';
    else
      printf("Digite Sim ou Nao!\n");
  } while (repetir!='n');
  vacina=(stricmp(vacinado,"Sim")==0);
  return vacina;
}

double alturaValidada(double altura){
  char repetir;
  do {
    printf("Digite a altura:\n");
    scanf("%lf", &altura);
    if ((altura>1)&&(altura<2)) {
      break;
    }
    else{
      printf("Altura Incorreta\n");
      repetir='S';
    }
  } while(repetir=='S');
  return altura;
}

void ordenacao(struct cadastro *cad){
  struct cadastro aux_cad;
  int k, i;
  for (k = 0; k < j-1; k++){
    for (i = 0; i < j-1; i++){
      if (cad[i].id > cad[i+1].id){

        aux_cad = cad[i];
        cad[i]= cad[i+1];
        cad[i+1]= aux_cad;

      }
    }
  }
}
