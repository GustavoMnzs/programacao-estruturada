#include <stdio.h>

int main(){

    char letras[30];
    int i, tam;

    printf("Digite 30 letras: ");
    fflush(stdin);
    gets(letras);

    tam = strlen(letras);

    for (i = tam; i >= 0; i--){
        printf("%c", letras[i]);
    }

    return 0;
}