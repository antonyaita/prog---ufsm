/*Pedrinho tem um cofrinho com muitas moedas e deseja saber quantos reais
conseguiu poupar. Faça um programa que leia a quantidade de moedas de cada
tipo e imprima o valor total economizado, em reais. Considere que existem moedas
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade lida deve ser zero.*/

#include <stdio.h>

int main(){
    float total, centavo1, centavo2, centavo5, centavo10, centavo25, centavo50, real1; 
    printf("Quantas moedas de 1 centavo voce tem? ");
    scanf("%f", &centavo1);

    printf("Quantas moedas de 2 centavos voce tem? ");
    scanf("%f", &centavo2);

    printf("Quantas moedas de 5 centavos voce tem? ");
    scanf("%f", &centavo5);

    printf("Quantas moedas de 10 centavos voce tem? ");
    scanf("%f", &centavo10);

    printf("Quantas moedas de 25 centavos voce tem? ");
    scanf("%f", &centavo25);

    printf("Quantas moedas de 50 centavos voce tem? ");
    scanf("%f", &centavo50);

    printf("Quantas moedas de 1 real voce tem? ");
    scanf("%f", &real1);

    centavo1 = centavo1*0.01;
    centavo2 = centavo2*0.02;
    centavo5 = centavo5*0.05;
    centavo10 = centavo10*0.10;
    centavo25 = centavo25*0.25;
    centavo50 = centavo50*0.50;

    total = centavo1+centavo2+centavo5+centavo10+centavo25+centavo50+real1;

    printf("%.2f", total);
    
    return 0;
}