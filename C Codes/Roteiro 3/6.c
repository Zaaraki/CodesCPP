#include<stdio.h>
#include<stdlib.h>
#include<string.h>

float porc(int nV, int tV){
    float ret = (nV*100.0)/tV;
    return ret;
}

int main(){

    int i, j, cont=0;
    int jog[23];
    int voto, totalVotos=0;
    int melhorJ, vmelhorJ=0;
    float porcmJ;
    printf("Enquete: Quem foi o melhor jogador?\n\n");

    for(i=0; i<23; i++){
        jog[i]=0;
    }

    while(voto!=0){
        printf("Numero do jogador (0=fim): ");
        scanf("%d", &voto);

        if(voto>0 && voto<24){
            jog[voto-1]++;
            totalVotos++;
        }
        else if (voto > 23){
            printf("Informe um valor entre 1 e 23 ou 0 para sair.\n\n");
        }

    }

    printf("\n----- RESULTADO DOS VOTOS ----\n");
    printf("\nForam computados %d votos\n", totalVotos);

    if(totalVotos!=0){
    for(j=0; j<23; j++){
        printf("Jogador %d tem %d votos, com %.2f porcento.\n", j+1, jog[j], porc(jog[j], totalVotos));
        if(vmelhorJ < jog[j]){
            melhorJ = j+1;
            vmelhorJ = jog[j];
            porcmJ = porc(jog[j], totalVotos);
        }
    }
    printf("\nO melhor jogador eh %d com %d votos e %.2f porcento.\n", melhorJ, vmelhorJ, porcmJ);
    }

    else printf("\nNao houve votacao\n");

}
