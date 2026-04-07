/*9. Faça um programa que leia um valor em real e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/
#include <stdio.h>

int main(){
    float real, dolar;

    printf("digite quantos reais vc quer converter: ");
    scanf("%f", &real);

    dolar = real * 5.24;

    printf("o valor convertido em dolar e de: %.2f", dolar);
    return 0;
}