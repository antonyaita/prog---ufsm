/*10) Faça um programa que leia um número inteiro e verifique se é
par ou ímpar, imprimindo essa informação.*/

#include <stdio.h>

int main(){
    int a;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf((a % 2 == 0) ? "a e par" : "a e impar");

    return 0;
}