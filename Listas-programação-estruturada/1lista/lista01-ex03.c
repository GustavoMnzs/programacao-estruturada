#include <stdio.h>

int main(){

    double dados[100];
    int i;
    float soma;

    for (i = 0; i < 100; i++){
        printf("Digite um numero: ");
        scanf("%lf", &dados[i]);

        soma = soma + dados[i];
    }

    printf("A soma dos numeros e de: %f", soma);
    

    return 0;
}