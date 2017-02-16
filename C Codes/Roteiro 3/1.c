#include<stdio.h>
#include<stdlib.h>

int main(){

char nome[30];
int i;
int tam=sizeof(nome);

printf("Digite o seu nome: ");
scanf("%s", &nome);

for(i=0; i<30; i++){
    printf("%c\n", nome[i]);
    if(nome[i]== '\0')
        break;
}

return 0;
system("PAUSE");

}
