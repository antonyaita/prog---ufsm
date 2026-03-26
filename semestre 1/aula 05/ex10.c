/*10. A importância de R$ 780.000,00 será dividida entre três ganhadores da mega sena. Sendo que da
quantia total: o primeiro ganhador receberá 46%, o segundo receberá 32% e o terceiro receberá o
restante. Faça um programa que calcule e imprima a quantia ganha por cada ganhador.*/
#include <stdio.h>

int main(){
    float dinheiro, p1, p2, p3;

    dinheiro = 780000.00;
    p1 = dinheiro*0.46;
    p2 = dinheiro*0.32;
    p3 = dinheiro*0.22;

    printf("Ganhador um vai receber: R$%2.f\n", p1);
    printf("Ganhador dois vai receber: R$%2.f\n", p2);
    printf("Ganhador tres vai receber: R$%2.f", p3);
    return 0;
}