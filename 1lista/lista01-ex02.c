#include <stdio.h>

int main(){

    int numInformado, i;

    printf("Digite a quantidade de alunos que tem a sala: ");
    scanf("%d", &numInformado);

    while (numInformado>50){
        printf("Digite uma quantidade válida: ");
        scanf("%d", &numInformado);
    }
    
    double nota[numInformado];

    for (i = 0; i < numInformado; i++){
        printf("Digite a nota do aluno: ");
        scanf("%lf", &nota[i]);
    }

    return 0;
}
