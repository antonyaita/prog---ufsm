/*Faça um programa que leia 2 valores inteiros e os armazene nas variáveis a e b,
imprimindo-as. A seguir, realize a troca dos valores de modo que o valor contido
em a passe para b e o valor de b passe para a. Ao final, imprima os valores de a e b.*/

#include <stdio.h>

int main(){
    int x, y, temp;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y); 

    temp = y;
    y = x;
    x = temp;
    

    printf("o valor de x e: %d\n e o valor de y e: %d", x, y);
    return 0;
}