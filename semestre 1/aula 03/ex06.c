#include <stdio.h>

int x;

int main(){
    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%i", &x);
    int dezenas = ( x / 10) % 10;
    printf("O algarismo da dezena desse numero e: %i", dezenas);
    return 0;
}