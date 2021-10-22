#include <stdio.h>
#include <stdlib.h>

int main(){

    int notas[8], i, x;
    int nota[11];

    for (i = 0; i <= 10; i++){
        nota[i] = 0;
    }
    

    for (i = 0; i < 8; i++){

        do{
            printf("Digite a nota: ");
            scanf("%lf", &notas[i]);
        } while (notas[i] > 10 || notas[i] < 0);

    }

    for (i = 0; i < 8; i++){
        for (x = 0; x <= 10; x++){
            if (notas[i] == nota[x]){
                nota[x] = nota[x]+1;
            }
        }
    }

    for (i = 0; i <= 10; i++){
        printf("A nota %d aparece: %d\n", i, notas[i]);
    }
    
    

    return 0;
}
