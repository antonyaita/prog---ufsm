/*O móbile de Maria é composto por três hastes como mostra a figura abaixo.
Para que ele esteja completamente equilibrado, com todas as hastes na
horizontal, os pesos das quatro bolas A, B, C e D têm que satisfazer todas as
seguintes condições:
A = B + C + D
B + C = D
B = C
Faça um programa que leia os pesos das quatro bolas e informe se o móbile
está ou não completamente equilibrado.*/

#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("Digite o valor de D: ");
    scanf("%d", &d);

    if (a == b + c + d && d == b + c && b == c)
    {
        printf("\nTa tudo equilibrado pae");
    }
    else
    {
        printf("\nTa tudo desequilibrado");
    }

    return 0;
}