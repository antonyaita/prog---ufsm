/*5. Faça um programa que leia um valor de área em metros quadrados (m2) e apresente-o convertido
em acres. A fórmula de conversão é: A = M 0,000247, sendo M a área em metros quadrados e A a ∗
área em acres.*/
#include <stdio.h>

int main(){
    float mQuadrado, acres;

    printf("Digite a metragem do seu campo em metros quadrados: ");
    scanf("%f", &mQuadrado);

    acres = mQuadrado * 0.000247;

    printf("O valor convertido em acres e de: %f", acres);
    return 0;
}