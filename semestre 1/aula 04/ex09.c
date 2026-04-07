/*faça um programa que receba como entrada a quantidade de maçãs para o
transporte e o preço de cada maçã. Como resultado, o programa deve informar o
valor total da carga e a quantidade de caixas de maçã necessárias para o
transporte. Considere que uma caixa de maçãs possui espaço para 48 unidades.
*/
#include <stdio.h>

int main(){
    int macas;
    float preco, total;

    printf("Quantas macas quero transportar: ");
    scanf("%d", &macas);

    printf("Quanto vale cada macas: ");
    scanf("%f", &preco);

    total = macas*preco;
    macas = macas/48;

    printf("O valor do transporte vai ser de: %.2f\nE as caixas necessarias serao de: %d", total, macas);
    
    return 0;
}


