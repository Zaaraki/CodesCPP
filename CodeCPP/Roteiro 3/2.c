#include<stdio.h>
#include<stdlib.h>

int main(){

char nome[30];
int i, j;
int tam=sizeof(nome);

printf("Digite o seu nome: ");
scanf("%s", &nome);

for(i=0; i<30; i++){
    for(j=0; j<i; j++){
        printf("%c", nome[j]);

    }
    printf("\n");
    if(nome[i]== '\0')
            break;
}
getchar();
system("PAUSE");
return 0;


}
