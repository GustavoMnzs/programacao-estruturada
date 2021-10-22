#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, escolha;
    double cd[10];

    for (i = 0; i < 10; i++){
        printf("Digite o valor do cd: ");
        scanf("%d", &cd[i]);
    }

    do{
        printf("Digite 1 se o porcentual sera 10%% para todos ou 0 se for outro porcentual!\n\n");
        scanf("%d", &escolha);
    } while (escolha>1 || escolha<0);

    if (escolha==1){
        for (i = 0; i < 10; i++){
            printf("valor CD sem aumento: %lf\n", cd[i]);
            cd[i] = cd[i]*1.1;
            printf("valor CD com aumento: %lf\n\n", cd[i]);
        }
    } else{
        double porcentual;
        printf("Digite o porcentual: ");
        scanf("%lf", &porcentual);
        for (i = 0; i < 10; i++){
            printf("valor CD sem aumento: %lf\n", cd[i]);
            cd[i] = cd[i] + (cd[i]*porcentual);
            printf("valor CD: %lf\n\n", cd[i]);
        }
    }
    
    

    return 0;
}