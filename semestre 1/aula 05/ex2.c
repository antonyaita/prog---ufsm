/*2. Faça um programa que leia três valores inteiros e imprima a soma deles*/
#include <stdio.h>

int main(){
    int a, b , c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int res = a + b + c;
    printf("%d", res);
    return 0;
}