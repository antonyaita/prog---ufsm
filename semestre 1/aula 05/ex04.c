/*4. Faça um programa que leia um valor de comprimento em centímetros e apresente-o convertido
em polegadas. A fórmula de conversão é: P = C / 2,54, sendo C o comprimento em centímetros e P o
comprimento em polegadas..*/
#include <stdio.h>

int main(){
    float p, cm;

    printf("Digite quantos centimetros tem sua tela: ");
    scanf("%f", &cm);

    p = cm/2.54;

    printf("O valor em polegadas e de: %.2f", p);
    return 0;
}