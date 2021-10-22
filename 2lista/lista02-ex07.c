#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculo(){
    int primeiro, segundo, terceiro;
    char operadorUm[1], operadorDois[1];
    double resultado;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &primeiro);

    printf("Digite o primeiro operador: ");
    scanf("%c", &operadorUm);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &segundo);

    printf("Digite o segundo operador: ");
    scanf("%c", &operadorDois);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &terceiro);

    resultado = calcular(primeiro, segundo, terceiro, operadorUm, operadorDois);

    printf("%lf", resultado);
}

double calcular(int primeiro, int segundo, int terceiro, char operadorUm, char operadorDois){
    double calculo;
    switch (operadorUm){
    case '+':
        calculo = primeiro + segundo;
        break;
    case '-':
        calculo = primeiro - segundo;
        break;
    case '*':
        calculo = primeiro * segundo;
        break;
    case '/':
        calculo = primeiro / segundo;
        break;
    }

    switch (operadorDois){
    case '+':
        calculo = calculo + terceiro;
        break;
    case '-':
        calculo = calculo - terceiro;
        break;
    case '*':
        calculo = calculo * terceiro;
        break;
    case '/':
        calculo = calculo / terceiro;
        break;
    }

    return calculo;

}

int main(){

    calculo();

    return 0;
}
