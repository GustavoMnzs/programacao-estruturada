//!BIBLIOTECAS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//!VARIAVEIS GLOBAIS
char nomeGlobal[30][1000], emailGlobal[15][1000], sexoGlobal[15][1000], enderecoGlobal[30][1000],vacinadoGlobal[4][1000];
int j, idGlobal[1000], vacinaGlobal[1000], cont=0;
double alturaGlobal[1000];

//!FUNCAO MAIN()
int main(void) {
    //TODO: Nessa parte a gente chama as funcoes que vamos precisar 
    void Menu();
    void imprimirUsuario();
    void buscarID();
    void buscarEmail();
    //TODO: Nessa parte a gente declara as variaveis dentro da funcao
    char nome[30], email[15], sexo[15], endereco[30],vacinado[4], verificarEdicao, verificarExclusao, nomeSalvar[30], emailSalvar[30], sexoSalvar[15], enderecoSalvar[30];
    char repetir,repetir2,repetir3,repetir4,fem[]="Feminino", mas[]="Masculino", nd[]="Nao declarar",nao[]="Nao",sim[]="Sim";
    double altura, alturaEditado, alturaSalvar;
    int opcaoEscolhida, i=1, id[1000], idFixo, tamanhoEmail, vacina, editar, excluir, idSalvar;
    int x=0, y=0, z, d, entrarExclusao=0;
    char nomeEditado[30], emailEditado[15], sexoEditado[15], enderecoEditado[30], vacinadoEditado[4], vacinaSalvar[4];
    char helper[60];
    //TODO: Condicao para fazer so ate 1000 usuarios
    do {
        Menu();
        do{
            printf("Digite um dos valores mostrados no menu -> ");
            scanf("%i", &opcaoEscolhida);
        } while (opcaoEscolhida>8 || opcaoEscolhida<1);
        system("cls");
        fflush(stdin);
        switch (opcaoEscolhida) {
        case 1:
            id[i] = rand() % 1000;
            idFixo=id[i];
            printf("Usuario: %i\n", id[i]);
            printf("Digite o nome:\n");
            gets(nome);
            do {
                printf("Digite o email:\n");
                gets(email);
                tamanhoEmail=strlen(email);
                for (i = 0; i < tamanhoEmail; i++) {
                    switch (email[i]) {
                        case '@':
                        repetir='N';
                    }
                }
                if (repetir!='N')
                printf("Email deve conter @!!\n");
            } while(repetir!='N');
            do {
                printf("Digite o sexo (Feminino, Masculino, Nao declarar):\n");
                gets(sexo);
                if ((strcmp(sexo,fem)==0) || (strcmp(sexo,mas)==0) || (strcmp(sexo,nd)==0))
                break;
                else{
                printf("Sexo Incorreto!!\n");
                    repetir2='S';
                }
            } while(repetir2=='S');
            printf("Digite o endereco:\n");
            gets(endereco);
            do {
                printf("Digite a altura:\n");
                scanf("%lf", &altura);
                if ((altura>=1)&&(altura<=2)) {
                    break;
                }
                else{
                printf("Altura Incorreta\n");
                repetir3='S';
                }
            } while(repetir3=='S');
            do {
                printf("Ja vacinou? (Sim/ Nao)\n");
                fflush(stdin);
                gets(vacinado);
                if ((strcmp(vacinado, sim)==0)||(strcmp(vacinado, nao)==0))
                    repetir4='N';
                else
                printf("Digite Sim ou Nao!\n");
            } while(repetir4!='N');
            _Bool vacina = strcmp(sim, vacinado)==0;
            system("cls");
            break;

        case 2:
            printf("Digite o ID: ");
            scanf("%i", &editar);
            do {
                if (editar==idGlobal[x]) {
                    printf("\n");
                    fflush(stdin);
                    printf("Digite o nome:\n");
                    gets(nomeEditado);
                    do {
                        printf("Digite o email:\n");
                        gets(emailEditado);
                        tamanhoEmail=strlen(emailEditado);
                        for (i = 0; i < tamanhoEmail; i++) {
                            switch (emailEditado[i]) {
                                case '@':
                                repetir='N';
                            }
                        }
                        if (repetir!='N')
                        printf("Email deve conter @!!\n");
                    } while(repetir!='N');
                    do {
                        printf("Digite o sexo (Feminino, Masculino, Nao declarar):\n");
                        gets(sexoEditado);
                        if ((strcmp(sexoEditado,fem)==0) || (strcmp(sexoEditado,mas)==0) || (strcmp(sexoEditado,nd)==0))
                            break;
                        else{
                        printf("Sexo Incorreto!!\n");
                            repetir2='S';
                        }
                    } while(repetir2=='S');
                    printf("Digite o endereco:\n");
                    gets(enderecoEditado);
                    do {
                        printf("Digite a altura:\n");
                        scanf("%lf", &alturaEditado);
                        if ((alturaEditado>=1)&&(alturaEditado<=2)) {
                            break;
                        }
                        else{
                        printf("Altura Incorreta\n");
                        repetir3='S';
                        }
                    } while(repetir3=='S');
                    do {
                        printf("Ja vacinou? (Sim/ Nao)\n");
                        fflush(stdin);
                        gets(vacinadoEditado);
                        if ((strcmp(vacinadoEditado, sim)==0)||(strcmp(vacinadoEditado, nao)==0))
                            repetir4='N';
                        else
                        printf("Digite Sim ou Nao!\n");
                    } while(repetir4!='N');
                    if (vacinadoEditado == sim){
                        _Bool vacina = strcmp(sim, vacinadoEditado)==0;
                    } else{
                        _Bool vacina = strcmp(nao, vacinadoEditado)==0;
                    }
                    system("cls");
                    break;
                }
                x++;
            } while((verificarEdicao!='N')&&(x<=cont));

            fflush(stdin);
            strcpy(nomeGlobal[x], nomeEditado);
            strcpy(emailGlobal[x], emailEditado);
            strcpy(sexoGlobal[x], sexoEditado);
            strcpy(enderecoGlobal[x], enderecoEditado);
            alturaGlobal[x] = alturaEditado;

            system("cls");
            break;

        case 3:
            printf("Digite o ID: ");
            scanf("%i", &excluir);
            do {
                if (excluir==idGlobal[y] || entrarExclusao == 1) {
                    z=y+1;

                    idGlobal[y] = idGlobal[z];
                    strcpy(helper, nomeGlobal[z]);
                    strcpy(nomeGlobal[y], helper);

                    strcpy(helper, emailGlobal[z]);
                    strcpy(emailGlobal[y], helper);

                    strcpy(helper, sexoGlobal[z]);
                    strcpy(sexoGlobal[y], helper);

                    strcpy(helper, enderecoGlobal[z]);
                    strcpy(enderecoGlobal[y], helper);

                    alturaGlobal[y] = alturaGlobal[z];
                    vacinaGlobal[y] = vacinaGlobal[z];

                    idFixo = idGlobal[z];
                    strcpy(nome, nomeGlobal[z]);
                    strcpy(email, emailGlobal[z]);
                    strcpy(sexo, sexoGlobal[z]);
                    strcpy(endereco, enderecoGlobal[z]);
                    altura = alturaGlobal[z];
                    vacina = vacinaGlobal[z];

                    entrarExclusao=1;
                    if (y==1000){
                        verificarExclusao='N';
                    }
                }
                y++;
            } while((verificarExclusao!='N')&&(y<=cont));
            system("cls");
            break;

        case 4:
            buscarID();
        break;
        case 5:
            buscarEmail();
        break;
        case 6:
            imprimirUsuario(); // As vezes strings dao erro!?
        break;
        case 7:
            fflush(stdin);
            strcpy(nomeGlobal[j], nome);
            strcpy(emailGlobal[j], email);
            strcpy(sexoGlobal[j], sexo);
            strcpy(enderecoGlobal[j], endereco);
            alturaGlobal[j]=altura;
            vacinaGlobal[j]=vacina;
            idGlobal[j]=idFixo;
            j++;
            cont++;
        case 8:
            j--;
            fflush(stdin);
            strcpy(nomeGlobal[j], nome);
            strcpy(emailGlobal[j], email);
            strcpy(sexoGlobal[j], sexo);
            strcpy(enderecoGlobal[j], endereco);
            alturaGlobal[j]=altura;
            vacinaGlobal[j]=vacina;
            idGlobal[j]=idFixo;
            j++;
        break;
        }
    } while(cont < 1000);
    return 0;
    }

//!FUNCAO PARA IMPRIMIR O MENU
void Menu(){
    printf("Selecione uma opcao: \n");
    printf("\t1 -> inclua um usuario por vez (MAXIMO 1000), apos o cadastro escolha a opcao 7 para salvar o cadastro; \n");
    printf("\t2 -> edite um usuario; \n");
    printf("\t3 -> exclua um usuario; \n");
    printf("\t4 -> busque um usuario pelo id; \n");
    printf("\t5 -> busque um usuario pelo email; \n");
    printf("\t6 -> imprimir todos os usuarios cadastrados; \n");
    printf("\t7 -> fazer backup dos usuarios cadastrados; \n");
    printf("\t8 -> fazer restauracao de dados; \n\n");
}

//!FUNCAO PARA IMPRIMIR O USUARIO
void imprimirUsuario() {
    char sair;
    for (j=0; j<cont; j++){
        printf("Usuario: %i\n", idGlobal[j]);
        printf("Nome: %s\n", nomeGlobal[j]);
        printf("Email: %s\n", emailGlobal[j]);
        printf("Sexo: %s\n", sexoGlobal[j]);
        printf("Altura: %f\n", alturaGlobal[j]);
        printf("Vacinou: %i\n", vacinaGlobal[j]);
        printf("\n\n");
    }
    printf("\n\nClique em qualquer tecla+enter ou so enter para voltar ao menu!\n");
    scanf("%c", &sair);
    system("cls");
}

//!FUNCAO PARA BUSCAR O CADASTRO PELO ID
void buscarID() {
    int main();
    int idBusca,i=0, sair;
    char repetir;
    printf("Digite o ID: ");
    scanf("%i", &idBusca);
    do {
        if (idBusca==idGlobal[i]) {
        printf("\n");
        fflush(stdin);
        printf("Usuario: %i\n", idGlobal[i]);
        printf("Nome: %s\n", nomeGlobal[i]);
        printf("Email: %s\n", emailGlobal[i]);
        printf("Sexo: %s\n", sexoGlobal[i]);
        printf("Altura: %f\n", alturaGlobal[i]);
        printf("Vacinou: %i\n", vacinaGlobal[i]);
        repetir='N';
        }
        if ((i==cont)&&(repetir!='N'))
        printf("ID invalido");
        i++;
    } while((repetir!='N')&&(i<=cont));
    printf("\n\nClique em qualquer tecla+enter ou so enter para voltar ao menu!\n");
    scanf("%i", &sair);
    system("cls");
}

//!FUNCAO PARA BUSCAR O CADASTRO PELO EMAIL
void buscarEmail() {
char emailBusca[30],i=0;
char repetir,sair;
printf("Digite o email: \n");
gets(emailBusca);
do {
    if (strcmp(emailBusca,emailGlobal[i])==0) {
        printf("\n");
        fflush(stdin);
        printf("Usuario: %i\n", idGlobal[i]);
        printf("Nome: %s\n", nomeGlobal[i]);
        printf("Email: %s\n", emailGlobal[i]);
        printf("Sexo: %s\n", sexoGlobal[i]);
        printf("Altura: %f\n", alturaGlobal[i]);
        printf("Vacinou: %i\n", vacinaGlobal[i]);
        repetir='N';
    }
    if ((i==cont)&&(repetir!='N'))
        printf("Email invalido");
        i++;
    } while((repetir!='N')&&(i<=cont));
    printf("\n\nClique em qualquer tecla+enter ou so enter para voltar ao menu!\n");
    scanf("%c", &sair);
    system("cls");
}