#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calcularElevacao(int valorX, int elevado){
    return pow(valorX, elevado);
}

int main(){

    int valorX, elevado;

    printf("Digite o numero: ");
    scanf("%d", &valorX);

    printf("Digite o quanto vai ser elevado: ");
    scanf("%d", &elevado);

    //limpar a tela
    system("cls");

    printf("%d", calcularElevacao(valorX, elevado));

    return 0;
}