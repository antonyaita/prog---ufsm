/*1) Leia um conjunto de 4 valores i, a, b, c, onde i é inteiro e positivo e
a, b, c são reais. Escreva os valores lidos e, a seguir:
• Se i = 1 escrever os valores a, b, c em ordem crescente.
• Se i = 2 escrever os valores a, b, c em ordem decrescente.
• Se i = 3 escrever os valores a, b, c de forma que o maior fique
entre os outros dois.*/

#include <stdio.h>

int main(){
    int i;
    float a, b, c, maior, menor, meio;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    if (a <= b && a <= c) {
        menor = a;
        if (b <= c) {
            meio = b;
            maior = c;
        } else {
            meio = c;
            maior = b;
        }
    } else if (b <= a && b <= c) {
        menor = b;
        if (a <= c) {
            meio = a;
            maior = c;
        } else {
            meio = c;
            maior = a;
        }
    } else {
        menor = c;
        if (a <= b) {
            meio = a;
            maior = b;
        } else {
            meio = b;
            maior = a;
        }
    }

    switch (i)
    {
     case 1:
        printf("Ordem crescente: %.2f, %.2f, %.2f\n", menor, meio, maior);
        break;
     case 2:
        printf("Ordem decrescente: %.2f, %.2f, %.2f\n", maior, meio, menor);
        break;
    case 3:
        printf("Maior no meio: %.2f, %.2f, %.2f\n", meio, maior, menor);
        break;
    default:
        printf("Valor de i inválido. Use 1, 2 ou 3.\n");
    }

    return 0;
}
