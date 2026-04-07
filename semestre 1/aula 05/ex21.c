/*21. Faça um programa que leia um número inteiro, calcule e mostre a sua decomposição em
unidade, dezena, centena e milhar. Considere que o número máximo recebido via teclado será de
9999. Exemplo: A entrada 8531 terá a saída: unidade = 1, dezena = 3, centena = 5, milhar = 8.*/

#include <stdio.h>

int main(){
    int a, milhar, centena, dezena, unidade;

    printf("Digite seu numero contendo ate 9999: ");
    scanf("%d", &a);

    milhar = a / 1000;
    centena = (a % 1000) / 100;
    dezena = ((a % 1000) % 100) /10;
    unidade = (((a % 1000) % 100) % 10) % 10;

    printf("\nUnidade = %d", unidade);
    printf("\nDezena = %d", dezena);
    printf("\nCentena = %d", centena);
    printf("\nMilhar = %d", milhar);

    return 0;
}