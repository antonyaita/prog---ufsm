/*Faça um programa que leia o preço do litro de álcool, o preço do litro de
gasolina e os quilômetros por litro que um carro bi-combustível realiza com
cada um desses combustíveis e determine se é mais econômico abastecer o
carro com álcool ou gasolina. No caso de não haver diferença de custo entre
abastecer com álcool ou gasolina, o motorista prefere utilizar gasolina.*/
#include <stdio.h>

int main(){
    float alcool, gasolina, kmAlcool, kmGasolina;

    printf("Digite o valor do litro de alcool: ");
    scanf("%f", &alcool);

    printf("Digite o valor do litro de gasolina: ");
    scanf("%f", &gasolina);


    printf("Digite o km por litro de alcool: ");
    scanf("%f", &kmAlcool);

    printf("Digite o km por litro de gasolina: ");
    scanf("%f", &kmAlcool);

    if((alcool / kmAlcool) > (gasolina / kmGasolina))
    {
        printf("é mais economico andar a gasolina");
    }
    else if((alcool / kmAlcool) <= (gasolina / kmGasolina))
    {
        printf("vai ser melhor usar gasolina");
    }

    return 0;
}