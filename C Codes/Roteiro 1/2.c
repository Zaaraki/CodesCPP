#include<stdio.h>
#include<stdlib.h>

int main(){

    float salario, des, salarioL, calc;
    printf("Digite o salario bruto: ");
    scanf("%f", &salario);


    if(salario<=420){
       des=0.08;
       calc=salario*des;
       salarioL = salario-calc;

       printf("O desconto foi de %.2f%% e o salario liquido eh de %.2f\n", des*100, salarioL);
    }
    else if(salario>420 && salario<=1350){
        des=0.09;
        calc=salario*des;
       salarioL = salario-calc;

       printf("O desconto foi de %.2f%% e o salario liquido eh de %.2f\n", des*100, salarioL);
    }
    else if(salario>1350){
        des=0.1;
        calc=salario*des;
       salarioL = salario-calc;

       printf("O desconto foi de %.2f%% e o salario liquido eh de %.2f\n", des*100, salarioL);
    }


}

