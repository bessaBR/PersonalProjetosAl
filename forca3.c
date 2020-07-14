#include <stdio.h>
#include <string.h>

int main (){
   
   char palavraSecreta[9];
   char chutes[26];
   int acertou      = 0;
   int enforcou     = 0;
   int tentativas   = 0;

   sprintf(palavraSecreta, "guitarra");
   printf("%s\n", palavraSecreta);

   do{

       for (int i = 0; i < strlen(palavraSecreta); i++){
           int achou = 0;

           for (int j = 0; j < tentativas; j++){
               
                if (chutes[j] == palavraSecreta[i]){
                    achou = 1;
                    break;
                }
                
           }

           if(achou){
               printf("%c ", palavraSecreta[i]);
           }else{
               printf("_ ");
           }                     
           
       }
       printf("\n");
       
       char chute;
       scanf(" %c", &chute); // O espaço antes de %c é para o sistema ignorar a tecla enter, caso contraio ele considero o 'enter' um char
       
       chutes[tentativas] = chute;
       tentativas++; 
       
   } while (!acertou && !enforcou);

}
