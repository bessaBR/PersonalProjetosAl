#include <stdio.h>

int main(){
    int numeroSecreto = 42;
    int chute;
    int contador      = 0;
    int ganhou        = 0;
    //int numeroDeChutes = 2;
    
    printf("****************************************\n");
    printf("*********** Bem-vindo ao jogo **********\n");
    printf("****************************************\n");
 
    //printf("\nO numero secreto eh %d \n", numeroSecreto);
   
    while(ganhou == 0){
            printf("\nDigite um numero:\n");
            scanf("%d", &chute);

        if(chute < 0) {
            printf("\nSomente numeros positivos, neh meu parca!!\n"); 
            continue; //Não executa o resto do codigo, mas faz o loop continuar.
        }else{
                printf("Voce digitou: %d \n", chute);
                
                int acertou = chute == numeroSecreto;
                int maior   = chute > numeroSecreto;
                int menor   = chute < numeroSecreto;
                                    
                    if(acertou){
                    printf("Show de bola, voce acertou o numero secreto!!\n");
                    printf("Voce acertou em %d tentativas\n", contador);
                    ganhou = 1; //Para a execução.
                    }
                    printf("Errrrrou!!\n");
                    if(menor){ printf("O numero secreto eh menor que %d! \n", chute);}
                    if(maior){ printf("O numero secreto eh maior que %d! \n", chute);}
                     contador++;
           }
    }
    return 0;
}