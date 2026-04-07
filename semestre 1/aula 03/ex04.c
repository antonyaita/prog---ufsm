#include <stdio.h>

int main(){
    float preco;
    printf("Indique o preco do produto: ");
    scanf("%f", &preco);

    float desconto = preco-(preco*0.1);
    float aumento = preco+(preco*0.2);

    printf("O preco com desconto e: %f", desconto);
    printf("o preco com aumento e: %f", aumento);
}