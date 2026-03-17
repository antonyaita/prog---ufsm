/*Faça um programa que leia o valor da velocidade em m/s, transforme e imprima
este valor em km/h.*/
#include <stdio.h>

int main(){
    float m;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &m);

    float conversao = m*3.6;

    printf("Aqui esta convertido para km/h: %2.f", conversao);
    return 0;
}