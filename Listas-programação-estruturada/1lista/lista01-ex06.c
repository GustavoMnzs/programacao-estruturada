#include <stdio.h>
#include <stdlib.h>

int main(){

    //definindo as variaveis
    char matricula[6][100];
    float salario[100], menorSalario = -1, maiorSalario = -1;
    int i;

    //percorrer cada valor do vetor
    for (i=0; i<100; i++){
        //entrada de dados
        printf("Digite a matricula:\n");
        scanf("%s", &matricula[i]);

        printf("Digite o salario:\n");
        scanf("%f", &salario[i]);

        //encontrar o menor e maior valor
        if (salario[i]<menorSalario){
            menorSalario = salario[i];
        }

        if (salario[i]>maiorSalario){
            maiorSalario = salario[i];
        }
    }

    //limpar a tela
    system("cls");

    //saida dos dados
    printf("Maio salario %.2f e menor salario %.2f", maiorSalario, menorSalario);

    return 0;
}