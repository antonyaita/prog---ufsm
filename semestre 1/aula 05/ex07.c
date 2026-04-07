/*7. Faça um programa que leia um valor de área em metros quadrados e apresente-o convertido em
hectares. A fórmula de conversão é: H = M 0, 0001, sendo M a área em metros quadrados e H a ∗
área em hectares.*/
#include <stdio.h>

int main(){
    float mQuadrado, hectares;

    printf("Digite a metragem do seu campo em metros quadrados: ");
    scanf("%f", &mQuadrado);

    hectares = mQuadrado * 0.0001;

    printf("O valor convertido em acres e de: %f", hectares);
    return 0;
}