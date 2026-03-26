/*1) Leia 2 valores a e b, verifique se os valores são múltiplos e escreva
a mensagem “são múltiplos” ou “não são múltiplos”.*/
#include <stdio.h>

int main(){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if( a % b == 0 || b % a == 0)
    {
        printf("Os numeros sao multiplos de si");
    }
    else
    {
        printf("Os numero nao sao multiplos de si");
    }

    return 0;
}