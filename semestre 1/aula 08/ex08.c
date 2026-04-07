/*8) Leia o plano de trabalho e o salário atual de um funcionário,
calcule e imprima o seu novo salário, com base na tabela abaixo:*/

#include <stdio.h>

int main(){
    char plano;
    float salario;

    printf("Digite o plano de trabalho (A, B, C): ");
    scanf(" %c", &plano);

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    switch (plano)
    {
    case 'A':
        printf("Seu novo salario sera de: R$%.2f", (salario * 0.09) + salario);
        break;
    case 'B':
        printf("Seu novo salario sera de: R$%.2f", (salario * 0.13) + salario);
        break;
    case 'C':
        printf("Seu novo salario sera de: R$%.2f", (salario * 0.17) + salario);
        break;
    default:
        printf("Voce escolheu uma jornada invalida");
        break;
    }
}