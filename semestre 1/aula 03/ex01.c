#include <stdio.h>

int main(){
    float nota1, nota2;
    int peso1, peso2;
    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);

    printf("Escreva a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o valor do peso da nota um: ");
    scanf("%i", &peso1);

    printf("Digite o valor do peso da nota dois: ");
    scanf("%i", &peso2);

    float ponderada = ((nota1 * peso1)+(nota2 * peso2))/(peso1 + peso2);

    printf("sua media foi de: %f", ponderada);
}