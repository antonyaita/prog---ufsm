/*Leia um caractere identificador do sexo (“M” para masculino e “F”
para feminino) e calcule o peso ideal de um usuário, com base
nas fórmulas abaixo:
– Para “M”: (altura – 100) * 0,9
– Para “F”: (altura – 100) * 0,85*/

#include <stdio.h>

int main(){
    char a;
    float altura;

    printf("Digite seu sexo (M para masculino e F para feminino): ");
    scanf(" %c", &a);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (a == 'M')
    {
        printf("Seu peso ideal e de: %.2f", (altura - 100) * 0.9);
    } else if (a == 'F')
    {
        printf("Seu peso ideal e de: %.2f", (altura - 100) * 0.85);
    } else 
    {
        printf("Voce digitou errado, repita");
    }

    return 0;
}