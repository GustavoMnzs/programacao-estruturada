#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int mes[50], cont, i, x, y, matricula[50], aux;

    do{

        printf("Digite a matricula: ");
        scanf("%d", &matricula[cont]);

        printf("Digite a qtd de meses: ");
        scanf("%d", &mes[cont]);

        cont++;

    } while (matricula[cont-1] != 0 || cont-1 < 50);

    for (x = 0; x < cont; x++){
        for (y = x; y < cont; y++){
            if (mes[x] > mes[y]){
                aux = mes[x];
                mes[x] = mes[y];
                mes[y] = aux;
            }
        }
    }

    printf("Vetor ordenado\n");
    for (i = 0; i < 3; i++)
        printf("%d\t", mes[i]);
    

    return 0;
}
