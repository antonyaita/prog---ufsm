    /*18. Faça um programa para uma loja de tintas. O programa deve ler o tamanho, em m2
    , da área a ser
    pintada. Considere que a cobertura da tinta é de 1 litro para cada 6 m2
    e que a tinta é vendida em
    latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00. Informe ao
    usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações. Sempre
    arredonde os valores para cima, isto é, considere latas cheias:
    I. comprar apenas latas de 18 litros
    II. comprar apenas galões de 3,6 litros
    III. misturar latas e galões, de forma que o preço seja o menor*/

#include <stdio.h>

int main(){

    float tamanho, litros;
    int latas, galoes, mLatas, mGaloes;

    printf("Digite o tamanho da area: ");
    scanf("%f", &tamanho);

    litros = tamanho / 6;

    latas = (int)(litros / 18.0 + 0.99);
    galoes = (int)(litros / 3.6 + 0.99);

    mLatas = (int)(litros / 18.0);
    mGaloes = (int)((litros - (mLatas * 18.0)) / 3.6 + 0.99);

    printf("\nI. Somente latas de 18L: %d - Preco: R$%.2f", latas, latas * 80.0);
    printf("\nII. Somente galoes de 3.6L: %d - Preco: R$%.2f", galoes, galoes * 25.0);
    printf("\nIII. Mistura: %d latas e %d galoes - Preco: R$%.2f\n", mLatas, mGaloes, (mLatas * 80.0) + (mGaloes * 25.0));

    return 0;
}