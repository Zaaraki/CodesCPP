#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct band{
    char nome[30];
    char tipo[20];
    int num;
    int rank;
} bandas;

bandas mB[2];

void setBanda(){
    int i;

    for(i=1; i<=2; i++){
        fflush(stdin);
        printf("Digite o nome da banda: ");
        gets(mB[i].nome);

        printf("\nDigite o tipo de musica que a banda toca: ");
        gets(mB[i].tipo);

        printf("\nQuantos integrantes? ");
        scanf("%d", &mB[i].num);

        printf("\nQual o ranking? ");
        scanf("%d", &mB[i].rank);

        printf("\n");
        printf("---------------------------");
        printf("\n\n");
    }

    for(i=1; i<=2; i++){
        printf("\nNome: %s", mB[i].nome);
        printf("\nTipo: %s", mB[i].tipo);
        printf("\nNumero de integrantes: %d", mB[i].num);
        printf("\nRanking: %d\n", mB[i].rank);

    }
}

void getRank(){
        int j;
        int i;
        printf("Digite um numero de 1 a 5: ");
        scanf("%d", &i);

        printf("\n");

        for(j=1; j<=2; j++){
            if(i == mB[j].rank){
                printf("--- INFO DA BANDA ---");
                printf("\n");
                printf("\nNome: %s", mB[j].nome);
                printf("\nTipo: %s", mB[j].tipo);
                printf("\nNumero de integrantes: %d", mB[j].num);
                printf("\nRank: %d\n", mB[j].rank);
                printf("\n-----------------------------\n");
        }
    }


    }

    void getTipo(){
        char t[20];
        int i;

        printf("Digite um tipo musical: ");
        scanf("%s", &t);



        for(i=1; i<=2; i++){
            if(strcmp(t, mB[i].tipo)==0){
                printf("\n---BANDAS DO TIPO '%s'---\n", t);
                printf("%s\n", mB[i].nome);
                printf("\n-----------------------------\n");
            }

            else{
                printf("\nNao existe esse tipo armazenado.\n");

            }
        }

    }

    void getNome(){
        char n[20];
        int i, test;

        printf("Digite o nome de uma banda: ");
        scanf("%s", &n);



        for(i=1; i<=2; i++){
            if(strcmp(n, mB[i].nome)==0){
                printf("\n%s esta nas suas bandas favoritas!\n", n);
            }

            else{
                printf("\n%s nao esta em sua lista de favoritos.\n", n);

                }
        }printf(mB[2].nome);
    }

int main(){
    setBanda();
    printf("\n");
    getRank();
    printf("\n");
    getTipo();
    printf("\n");
    getNome();
    printf("\n");
    system("PAUSE");
    return 0;
}
