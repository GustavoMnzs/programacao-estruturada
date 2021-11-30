#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double apresentaGrama(double pesoQuilogramas){
    double gramas;
    gramas = pesoQuilogramas*1000;
    return gramas;
}

double apresentaTonelada(double pesoQuilogramas){
    double toneladas;
    toneladas = pesoQuilogramas/1000;
    return toneladas;
}

int main(){

    double pesoQuilogramas;

    printf("Digite o peso em Kg: ");
    scanf("%lf", &pesoQuilogramas);

    printf("\nGramas: %lf\n", apresentaGrama(pesoQuilogramas));
    printf("Toneladas: %lf", apresentaTonelada(pesoQuilogramas));

    return 0;
}
