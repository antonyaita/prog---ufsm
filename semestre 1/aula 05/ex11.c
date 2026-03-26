/*11. Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima o valor líquido que deverá ser pago, 
sabendose que são descontados 8% para imposto de renda.*/
#include <stdio.h>

int main(){
    float diaria, salarioL;
    int ndias;
    diaria = 30.00;

    printf("Quantos dias o encanador foi chamado? ");
    scanf("%d", &ndias);
    salarioL = (diaria*ndias)*0.08;

    printf("O salario dele sera de: %.2f", salarioL);
    return 0;
}