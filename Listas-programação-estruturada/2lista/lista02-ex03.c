#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calcularMediaAritmetica(double nota1, double nota2){
    double calculo;
    calculo = (nota1+nota2)/2;
    return calculo;
}

double calcularMediaPonderada1(double nota1, double nota2){
    double calculo;
    calculo = (nota1*0.4)+(nota2*0.6)/2;
    return calculo;
}

double calcularMediaPonderada2(double nota1, double nota2){
    double calculo;
    calculo = (nota1*0.3)+(nota2*0.7)/2;
    return calculo;
}

int main(){

    double nota1, nota2;
    int i;

    for (i = 0; i < 20; i++){
        printf("Digite a nota 1: ");
        scanf("%lf", &nota1);

        printf("Digite a nota 2: ");
        scanf("%lf", &nota2);

        printf("Media aritmetica e: %.2lf\n", calcularMediaAritmetica(nota1,nota2));
        printf("Media ponderada 1 e: %.2lf\n", calcularMediaPonderada1(nota1,nota2));
        printf("Media ponderada 2 e: %.2lf\n\n", calcularMediaPonderada2(nota1,nota2));
    }
    

    return 0;
}
