/*1. Faça um programa que apenas declara duas variáveis inteiras a e b, sem dar valores a elas.
Imprima o valor das variáveis e veja o que acontece.*/
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("valor de a: %d \nvalor de b: %d", a, b);
    return 0;
}