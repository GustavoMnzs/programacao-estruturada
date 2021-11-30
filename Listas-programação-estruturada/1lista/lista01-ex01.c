#include <stdio.h>

int main(){

    double notas[30];
    int i;

    for (i=0; i<30; i++){
        printf("Digite a nota do aluno: ");
        scanf("%lf", &notas[i]);
    }

    for (i=0; i<30; i++){
        printf("%.2lf\n", notas[i]);
    }

    return 0;
}