#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[80], i, n=0, quantidade, valor=0;
    double buscador;

    for (i = 0; i < 80; i++){
        printf("Digite um numero: ");
        scanf("%lf", &numeros[i]);
    }

    printf("Digite o numero que quer procurar: ");
    scanf("%lf", &buscador);

    quantidade = 0;
    while (n < 80){
        if (numeros[n] == buscador){
            quantidade = quantidade+1;
        }
        n++;
    }

    int posicao[quantidade];
    for (i = 0; i < 80; i++){
        if (numeros[i] == buscador){
            posicao[valor] = i;
            valor++;
        }   
    }

    printf("O numero buscado esta nas posicoes:\n\n");
    printf("Aparece: %u", quantidade);
    for (i = 0; i < quantidade; i++){
        printf("\t%u ", posicao[i]);
    }
    

    return 0;
}