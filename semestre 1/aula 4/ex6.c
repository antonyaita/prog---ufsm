/*Realize a troca dos valores das variáveis do exercício anterior usando apenas duas
variáveis.*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y); 

    x = x+y;
    y = x-y;
    x = x-y;
    
    printf("o valor de x e: %d\n e o valor de y e: %d", x, y);

    return 0;
}