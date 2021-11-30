#include <stdio.h>
#include <stdlib.h>

void menu();
void passo_1();
void passo_2();
void passo_3();
void passo_4();
void passo_5();
void passo_6();
void passo_7();
void passo_8();

int main() {
  int passos;

  menu();
  system("pause");
  system("cls");
  passos=1;
  do {
    switch (passos) {
      case 1:
        menu();
        passo_1();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("----------------------------------------------\n\n");
        system("pause");
        system("cls");
        passos=2;
      break;
      case 2:
        menu();
        passo_2();
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("----------------------------------------------\n\n");
        passos=3;
        system("pause");
        system("cls");
      break;
      case 3:
        menu();
        passo_3();
        passos=4;
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("-----------------------------------------------------------\n\n");
        system("pause");
        system("cls");
      break;
      case 4:
        menu();
        passo_4();
        passos=5;
        printf("\n\n\n\n\n\n");
        printf("-----------------------------------------------------------\n\n");
        system("pause");
        system("cls");
      break;
      case 5:
        menu();
        passo_5();
        passos=6;
        printf("\n\n\n\n");
        printf("-----------------------------------------------------------\n\n");
        system("pause");
        system("cls");
      break;
      case 6:
        menu();
        passo_6();
        passos=7;
        printf("\n\n\n\n");
        printf("------------------------------------------------------------------\n\n");
        system("pause");
        system("cls");
      break;
      case 7:
        menu();
        passo_7();
        passos=8;
        printf("\n\n\n");
        printf("------------------------------------------------------------------------------\n\n");
        system("pause");
        system("cls");
      break;
      case 8:
        menu();
        passo_8();
        printf("\n\n\n");
        printf("------------------------------------------------------------------------------\n\n");
        printf("Digite o numero do passo a passo para rever: ");
        fflush(stdin);
        scanf("%i", &passos);
        system("cls");
    }
  } while(passos !=99);
  return 0;
}

void menu(){
  printf("        |-----------------------------------|\n");
  printf("        | Instrucoes para definir um Struct |\n");
  printf("        |-----------------------------------|\n\n");
}

void passo_1(){
  printf("Primeiro declare um variavel complexa (struct)\n");
  printf("----------------------------------------------\n\n");
  printf("    struct \n\n");
}

void passo_2(){
  printf("Segundo defina um nome para a variavel complexa\n");
  printf("-----------------------------------------------\n\n");
  printf("    struct estrutura\n\n");
}

void passo_3(){
  printf("Terceiro abra e feche chaves e finalize com ponto e virgula\n");
  printf("-----------------------------------------------------------\n\n");
  printf("    struct estrutura {\n\n    };\n\n");
}

void passo_4(){
  printf("Quarto declare as variaveis simples dentro do Struct\n");
  printf("-----------------------------------------------------------\n\n");
  printf("    struct estrutura {\n      char qqString[10];\n      int qqInt;\n    };\n\n");
}

void passo_5(){
  printf("Quinto declare a variavel de Struct e defina o nome\n");
  printf("-----------------------------------------------------------\n\n");
  printf("    struct estrutura {\n      char qqString[10];\n      int qqInt;\n    };\n\n");
  printf("    int main (void){\n      struct estrutura dadosQuaiquer;\n    return 0;\n    }\n");
}

void passo_6(){
  printf("Sexto para usar as variaveis simples passe pela variavel de struct\n");
  printf("------------------------------------------------------------------\n\n");
  printf("    struct estrutura {\n      char qqString[10];\n      int qqInt;\n    };\n\n");
  printf("    int main (void){\n      struct estrutura dadosQuaiquer;\n\n");
  printf("      printf(\"Digite o nome de um animal: \");\n      gets(dadosQuaiquer.qqString);\n\n");
  printf("      printf(\"Digite a quantidade de patas deste animal: \");\n");
  printf("      scanf(\"%%i\", &dadosQuaiquer.qqInt);\n\n");
  printf("      return 0;\n    }\n");
}

void passo_7(){
  printf("Setimo para imprimir as variaveis simples tambem passe pela variavel de struct\n");
  printf("------------------------------------------------------------------------------\n\n");
  printf("    struct estrutura {\n      char qqString[10];\n      int qqInt;\n    };\n\n");
  printf("    int main (void){\n      struct estrutura dadosQuaiquer;\n\n");
  printf("      printf(\"Digite o nome de um animal: \");\n      gets(dadosQuaiquer.qqString);\n\n");
  printf("      printf(\"Digite a quantidade de patas deste animal: \");\n");
  printf("      scanf(\"%%i\", &dadosQuaiquer.qqInt);\n\n");
  printf("      printf(\"Animal: %%s \", dadosQuaiquer.qqString);\n\n");
  printf("      printf(\"Quantidade de patas: %%s \", dadosQuaiquer.qqInt);\n\n");
  printf("      return 0;\n    }\n");
}

void passo_8(){
  printf("Fim!\n");
  printf("------------------------------------------------------------------------------\n\n");
  printf("    #include <stdio>\n\n");
  printf("    struct estrutura {\n      char qqString[10];\n      int qqInt;\n    };\n\n");
  printf("    int main (void){\n      struct estrutura dadosQuaiquer;\n\n");
  printf("      printf(\"Digite o nome de um animal: \");\n      gets(dadosQuaiquer.qqString);\n\n");
  printf("      printf(\"Digite a quantidade de patas deste animal: \");\n");
  printf("      scanf(\"%%i\", &dadosQuaiquer.qqInt);\n\n");
  printf("      printf(\"Animal: %%s \", dadosQuaiquer.qqString);\n\n");
  printf("      printf(\"Quantidade de patas: %%s \", dadosQuaiquer.qqInt);\n\n");
  printf("      return 0;\n    }\n");
}
