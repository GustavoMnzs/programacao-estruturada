#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int apresentaClassificacao(int anoNascimento, int anoAtual){
    int idadeProvavel;
    idadeProvavel = anoAtual-anoNascimento;
    return idadeProvavel;
}

void obtemNivel(int idadeProvavel){
    if (idadeProvavel<=10){
        printf("CRIANCA");
    } else if (idadeProvavel>10 && idadeProvavel<18){
        printf("ADOLESCENTE");
    } else if (idadeProvavel>=18 && idadeProvavel<25){
        printf("JOVEM");
    } else if (idadeProvavel>=25 && idadeProvavel<=58){
        printf("ADULTO");
    } else if (idadeProvavel>58){
        printf("IDOSO");
    }
}

void calculaIdade(int anoNascimento, int anoAtual){
    printf("Sua idade provavel e: %d\n", apresentaClassificacao(anoNascimento, anoAtual));
    obtemNivel(apresentaClassificacao(anoNascimento, anoAtual));
}

int main(){

    int anoNascimento, anoAtual;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    system("pause");

    calculaIdade(anoNascimento, anoAtual);

    return 0;
}
