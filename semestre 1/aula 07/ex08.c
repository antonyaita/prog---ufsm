/*8) Considere uma semi-quadra de tênis, a qual corresponde a um retângulo em
que dois vértices têm coordenadas (0,0) e (432, 468), onde todos os números
são em polegadas. Faça um programa que leia as coordenadas (X, Y) do ponto
de contato da bola com o solo, e determine se uma bola bateu no solo dentro
ou fora da semi-quadra. Note que se a bola bate na linha divisória ela é
considerada uma bola dentro. O programa deve imprimir a informação se a
bola caiu dentro ou fora da quadra. */

#include <stdio.h>

int main(){
    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);


    printf("\n---- RESULTADO ----\n");

    if (x <= 432 && y <= 468)
    {
        printf("IN!\n");
    }
    else
    {
        printf("OUT!\n");
    }

    return 0;
}
