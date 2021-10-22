#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void apresentaPorcentagem(int alunoMatriculado, int alunosAprovados, int alunosReprovados){
    double aprovados, reprovados;

    aprovados = (alunosAprovados*100)/alunoMatriculado;
    reprovados = (alunosReprovados*100)/alunoMatriculado;

    printf("A porcentagem de alunos aprovados e de %.2lf%% e de reprovados e de %.2lf%%", aprovados, reprovados);

}

int main(){

    int alunoMatriculado, alunosAprovados, alunosReprovados;

    printf("Digite a quantidade de alunos matriculados: ");
    scanf("%d", &alunoMatriculado);

    printf("Digite a quantidade de alunos aprovados: ");
    scanf("%d", &alunosAprovados);

    printf("Digite a quantidade de alunos reprovados: ");
    scanf("%d", &alunosReprovados);

    apresentaPorcentagem(alunoMatriculado,alunosAprovados,alunosReprovados);

    return 0;
}
