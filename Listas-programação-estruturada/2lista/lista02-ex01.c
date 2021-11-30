#include <stdio.h>
#include <stdlib.h>

double calcularMediaAritmetica(double altura1, double altura2, double altura3, double altura4, double altura5){
    double media;

    media = (altura1+altura2+altura3+altura4+altura5)/5;

    return media;
}

int main(){

    double altura[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("Digite a altura: ");
        scanf("%lf", &altura[i]);
    }

    printf("%.2lf", calcularMediaAritmetica(altura[0], altura[1], altura[2], altura[3], altura[4]));

    return 0;
}