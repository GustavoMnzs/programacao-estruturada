#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade[5], i, maisVelha, posicao;
    double media;

    for (i = 0; i < 5; i++){
        printf("Digite uma idade: ");
        scanf("%d", &idade[i]);
        media = media + idade[i];
        if (idade[i] > maisVelha){
            maisVelha = idade[i];
            posicao = i+1;
        }
        
    }

    media = media / 5;

    printf("\nA media e %.2lf \n", media);
    printf("A mais velha e %d \n", maisVelha);
    printf("E se encontra na posicao %d \n", posicao);

    return 0;
}