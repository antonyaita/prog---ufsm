/*6) Supondo uma tabela médica, o peso ideal está relacionado com
a altura e o sexo. Faça um programa que receba a altura e o
sexo de uma pessoa, calcula e imprime o seu peso ideal,
utilizando as seguintes fórmulas:
Para mulheres: (62.1 * altura) - 44.7
Para homens: (72.7 * altura) – 58
*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    float altura, pesoIdeal;
    int sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite 1 se voce e homem ou 0 se for mulher: ");
    scanf("%d", &sexo);

    if(sexo == 1)
    {
        pesoIdeal = (72.7 * altura) - 58;

        printf("Seu peso ideal deve ser de: %.2f", pesoIdeal);
    }
    else if(sexo == 0) 
    {
        pesoIdeal = (62.1 * altura) - 44.7;

        printf("Seu peso ideal deve ser de: %.2f", pesoIdeal);
    }
    else 
    {
        printf("Burro e zero ou um pra digitar, vira gente!");
    }

    return 0;
}