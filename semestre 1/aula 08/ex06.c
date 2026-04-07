/*6) Leia o número do mês e informe o número de dias existentes
naquele mês, conforme abaixo. Para números de mês inválidos, o
programa deve exibir uma mensagem adequada.*/

#include <stdio.h>

int main (){
    int mes;

    printf("Digite seu mes: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("Seu mes tem 31 dias");
        break;
    case 4: case 6: case 9: case 11:
        printf("Seu mes tem 30 dias");
        break;
    case 2:
        printf("Seu mes tem 28 dias");
        break;
    default:
        printf("Seu numero e invalido!");
    }

    return 0;
}