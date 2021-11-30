#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double calcularMedia();
    void exibirResultado();

    double teorica, pratica;

    do{
        printf("Caso nao queira digitar mais notas, digite um numero negativo na nota teorica!\n\n");

        printf("Digite a nota teorica: ");
        scanf("%lf", &teorica);
        
        if (teorica>-1){
            printf("Digite a nota pratica: ");
            scanf("%lf", &pratica);

            exibirResultado(calcularMedia(teorica, pratica));
        }
        

    } while (teorica>-1);

    return 0;
}

double calcularMedia(double teorica, double pratica){
    double media;

    media = (teorica*.3) + (pratica*.7);

    return media;
}

void exibirResultado(double media){
    if (media>=6){
        printf("Sua media e de: %lf\n", media);
        printf("APROVADO\n\n");
    } else{
        printf("Sua media e de: %lf\n", media);
        printf("REPROVADO\n\n");
    }
}