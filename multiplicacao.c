#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Digite um valor para x: \n");
    scanf("%d", &x);
    printf("Digite um valor para y: \n");
    scanf("%d", &y);
    int multi = x*y;
    printf("O resultado de %d x %d = %d\n", x, y, multi );

    return 0;
}