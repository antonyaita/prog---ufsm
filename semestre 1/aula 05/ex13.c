/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do
ano atual.*/
#include <stdio.h>

int main(){
    int idade, anoHoje, anoNasc;
    anoHoje = 2026;

    printf("Quantos anos a pessoa tem? ");
    scanf("%d", &idade);

    anoNasc = anoHoje - idade;

    printf("A pessoa nasceu em: %d", anoNasc);
}