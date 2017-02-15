#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

char word[30];
int i, j, flag=0;
int tam=sizeof(word);

printf("Digite o seu nome: ");
//scanf("%s", &word);
gets(word);

for(j=strlen(word); j>=0; j--){
    printf("%c", word[j]);
    if((word[strlen(word)-1] == word[0]) && (word[strlen(word)-2]== word[1]))
        flag++;
}

printf("\n\n");

if(flag!=0){
    printf("PALINDROMO!\n");
}

else
    printf("NAO PALINDROMO\n");


return 0;
system("PAUSE");

}
