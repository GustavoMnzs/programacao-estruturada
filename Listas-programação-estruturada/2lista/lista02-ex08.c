#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ordenarValores(double valor1, double valor2, double valor3){

    double peso[3], aux;
    int x, y, i;

    for (i = 0; i < 3; i++){
        switch (i){
        case 0:
            peso[i] = valor1;
            break;
        case 1:
            peso[i] = valor2;
            break;
        case 2:
            peso[i] = valor3;
            break;
        }
    }
    

    for (x = 0; x < 3; x++){
        for (y = x; y < 3; y++){
            if (peso[x] > peso[y]){
                aux = peso[x];
                peso[x] = peso[y];
                peso[y] = aux;
            }
        }
    }

    printf("Os pesos em ordem crescente e: %.2lf, %.2lf e por ultimo %.2lf", peso[0], peso[1], peso[2]);
}

int main(){

    double peso[3];
    int i;

    for (i = 0; i < 3; i++){
        printf("Digite o peso da pessoa: ");
        scanf("%lf", &peso[i]);
    }

    ordenarValores(peso[0], peso[1], peso[2]);

    return 0;
}
