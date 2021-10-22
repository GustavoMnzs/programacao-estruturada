#include <stdio.h>
#include <stdlib.h>

int verificarPopulacao(){
    int populacao;
    printf("Digite quantos habitantes tem a cidade: ");
    scanf("%d", &populacao);
    return populacao;
}

void analisarDado(int populacao){
    if (populacao>=1 && populacao<=5000){
        printf("\n\tVILA  --  De 1 ate 5000 habitantes.");
    } else if (populacao>=1 && populacao<=5000){
        printf("\n\tDISTRITO  --  De 5001 ate 15000 habitantes.");
    } else if (populacao>=15001 && populacao<=1000000){
        printf("\n\tCIDADE  --  De 15001 ate 1000000 habitantes.");
    } else{
        printf("\n\tMETROPOLE  --  A partir de 1000001.");
    }
}

int main(){
    int populacao;

    do{
        printf("Se nao quiser mais pesquisar, digite um numero negativo\n\n");

        populacao = verificarPopulacao();

        if (populacao>0){
            analisarDado(populacao);
        }
    } while (populacao>0);

    return 0;
}
