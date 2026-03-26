/*15. Faça um programa que leia um valor inteiro em segundos, e imprima-o em horas, minutos e
segundos*/
#include <stdio.h>

int main(){
    int hora, min, seg;
    printf("Escreva os segundos: ");
    scanf("%d", &seg);
    min = seg / 60;
    hora = min / 60;

    printf("Seu horario e de: %d : %d : %d ", hora, min, seg );
    
    return 0;
}