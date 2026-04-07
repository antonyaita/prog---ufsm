/*8. Faça um programa que leia um valor de área em hectares e apresente-o convertido em metros
quadrados. A fórmula de conversão é: M = H 10000, sendo M a área em metros quadrados e H a ∗
área em hectares.*/
#include <stdio.h>

int main(){
    float mQuadrado, hectares;

    printf("Digite a metragem do seu campo em hectares: ");
    scanf("%f", &hectares);

    mQuadrado = hectares * 10000;

    printf("O valor convertido em acres e de: %f", mQuadrado);
    return 0;
}