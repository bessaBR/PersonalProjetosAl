#include <stdio.h>
#define NUMERO_DE_CHUTES 3

int main(){
    int numeroSecreto = 9;
    int chute;
    //int numeroDeChutes = 2;
    
    printf("****************************************\n");
    printf("*********** Bem-vindo ao jogo **********\n");
    printf("****************************************\n");
 
    //printf("\nO numero secreto eh %d \n", numeroSecreto);
    for(int i = 1; i <= NUMERO_DE_CHUTES; i++){
    printf("\nTentativa %d de %d:\n", i, NUMERO_DE_CHUTES);
    printf("\nDigite um numero:\n");
    scanf("%d", &chute);
    printf("Voce digitou: %d \n", chute);
    
    int acertou = chute == numeroSecreto;
    int maior   = chute < numeroSecreto;

        if(acertou){
           printf("Show de bola, voce acertou o numero secreto!!\n");
           break;
        }else{
            printf("Voce quase acertou!!\n");
            if(maior){
              printf("Mas o numero secreto eh maior que %d! \n", chute);
            }else{
              printf("Mas o numero secreto eh menor que %d! \n", chute);
            }
        }
    }
    return 0;
}