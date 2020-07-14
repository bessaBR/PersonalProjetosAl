#include <stdio.h>
#include <string.h>

int main (){
   
   char palavraSecreta[4];
   int acertou  = 0;
   int enforcou = 0;

   
   /*
   palavraSecreta[0] = 'c';
   palavraSecreta[1] = 'a';
   palavraSecreta[2] = 's';
   palavraSecreta[3] = 'a';


   printf("%c%c%c%c\n", palavraSecreta[0], palavraSecreta[1], palavraSecreta[2], palavraSecreta[3]);
   */
   sprintf(palavraSecreta, "casa");
   printf("%s\n", palavraSecreta);

   do{
       char chute;
       scanf("%c", &chute);

       for (int i = 0; i < strlen(palavraSecreta); i++){
           if (palavraSecreta[i] == chute){
               printf("Aposicao %d tem essa letra! \n",i);
           }
           break;
           
       }
       
       
   } while (!acertou && !enforcou);
   


}