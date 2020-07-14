#include <stdio.h>

int main (){
   
   char palavraSecreta[4];
   
   /*
   palavraSecreta[0] = 'c';
   palavraSecreta[1] = 'a';
   palavraSecreta[2] = 's';
   palavraSecreta[3] = 'a';


   printf("%c%c%c%c\n", palavraSecreta[0], palavraSecreta[1], palavraSecreta[2], palavraSecreta[3]);
   */
   sprintf(palavraSecreta, "casa");
   printf("%s\n", palavraSecreta);
}