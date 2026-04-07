/*09) Faça um programa que leia 2 números inteiros x e y, verifique
o menor e atribua esse valor à variável z. */

#include <stdio.h>

int main(){
    int x, y, z = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    z = x > y ? y : x;

    printf("O valor de z e igual a: %d", z);

    return 0;
}