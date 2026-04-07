/*Faça um programa que leia a base e a altura de um triângulo. A seguir, calcule e
imprima a sua área.*/

#include <stdio.h>

int main(){
    float base, altura, area;
    
    printf("Digite o valor da base de um triangulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura de um triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2;
    printf("O valor da area desse triangulo e: %f", area);
    
    return 0;
}