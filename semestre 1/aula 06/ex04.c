/*Leia um número e informe se ele é divisível por 3 e por 7,
simultaneamente*/

#include <stdio.h>

int main(){
    int a;

    printf("Digite o valor de a: ");
    scanf("%f", a);

    if (a % 3 == 0 && a % 7 == 0)
    {
        printf("O numero %d e divisivel por 3 e 7", a);
    }

    return 0;
}