/*20. Faça um programa que leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito
por linha*/

#include <stdio.h>

int main(){
    int a, d1, d2, d3, d4;

    printf("Digite seu numero contendo 4 digitos (de 1000 a 9999): ");
    scanf("%d", &a);

    d1 = a / 1000;
    d2 = (a % 1000) / 100;
    d3 = ((a % 1000) % 100) /10;
    d4 = (((a % 1000) % 100) % 10) % 10;

    printf("\n%d", d1);
    printf("\n%d", d2);
    printf("\n%d", d3);
    printf("\n%d", d4);

    return 0;
}