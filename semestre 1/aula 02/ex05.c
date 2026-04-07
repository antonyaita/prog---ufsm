#include <stdio.h>

int main(){
    char nome[15];
    int idade;
    printf("Digite seu nome e sua idade\n");
    scanf("%s %i", nome, &idade);
    printf("Meu nome e: %s e eu tenho %i anos", nome, idade);
    return 0;
}