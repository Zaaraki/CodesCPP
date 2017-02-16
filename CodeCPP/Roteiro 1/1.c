#include<stdio.h>
#include<stdlib.h>

int main(){

    int idade=0;
    float preco=0,porc=0, desc=0, precoN=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite o preco do sapato: ");
    scanf("%f", &preco);

    if(idade<=18){
        porc = 0.10;
        desc = preco*porc;

        precoN = preco - desc;

        printf("O desconto sera de %.2f %% e o preco final eh de %.2f\n", porc*100, precoN);

    }else{
        porc = 0.20;
        desc = preco*porc;

        precoN = preco - desc;

        printf("O desconto sera de %.2f %% e o preco final eh de %.2f\n", porc*100, precoN);
    }



}
