/*3. Faça um programa que leia um valor de comprimento em polegadas e apresente-o convertido em
centímetros. A fórmula de conversão é: C = P * 2,54, sendo C o comprimento em centímetros e P o ∗
comprimento em polegadas.*/
#include <stdio.h>

int main(){
    float p, cm;

    printf("Digite quantas polegadas tem sua tela: ");
    scanf("%f", &p);

    cm = p * 2.54;

    printf("O valor em polegadas e de: %.2fcm", cm);
    return 0;
}