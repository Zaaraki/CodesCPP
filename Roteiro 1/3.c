#include<stdio.h>
#include<stdlib.h>

int main(){

    int num, aux=0;
    while(num!=0){
        printf("Digite um numero inteiro:");
        scanf("%d", &num);

        if(num>aux){
            aux=num;
        }
    }

    printf("O maior numero digitado foi %d\n", aux);

}

