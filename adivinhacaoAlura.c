#include <stdio.h>
int main(){
    int numeroSecreto = 9;
    int chute;
   
    printf("****************************************\n");
    printf("*********** Bem-vindo ao jogo **********\n");
    printf("****************************************\n");
 
    //printf("\nO numero secreto eh %d \n", numeroSecreto);
    printf("Digite um numero:\n");
    scanf("%d", &chute);
    printf("Voce digitou: %d \n", chute);

        if(chute == numeroSecreto){
           printf("Show de bola, voce acertou o numro secreto!!\n");
     
        }else{

            if(chute > numeroSecreto){
            printf("Voce quase acertou o numero secreto!!\n");
            printf("Mas o numero secreto eh maior que %d! \n", chute);
            }
            if(chute < numeroSecreto){
            printf("Voce quase acertou o numero secreto!!\n");
            printf("Mas o numero secreto eh menor que %d! \n", chute);
            }
        }

    return 0;
}