#include <stdio.h>

int data;

int main(){
    printf("Digite sua data no formato ddmmaaaa: ");
    scanf("%d", &data);

    int ano = data % 10000;
    int mes = (data / 10000) % 100;
    int dia = data / 1000000;
    
    printf("Sua data e: %d %d %d", dia, mes, ano);
    return 0;
}