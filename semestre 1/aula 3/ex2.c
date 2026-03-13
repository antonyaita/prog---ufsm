#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Escreva o valor de x: ");
    scanf("%d", &x);

    printf("Escreva o valor de y: ");
    scanf("%d", &y);

    printf("O sucessor de x e: %d", ++x);
    printf("\nO antecessor de y e: %d", --y);
}