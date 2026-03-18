/*Faça um programa que leia a quantidade de carros que uma locadora possui e o
valor que ela cobra por diária, mostrando as informações pedidas a seguir:
 Sabendo que um terço dos carros são alugados por mês, exiba o
faturamento anual da locadora;
 Quando o cliente atrasa o horário de devolução do carro, é cobrada uma
multa de 10% sobre o valor da diária. Sabendo que um décimo dos carros
alugados no mês são devolvidos com atraso, calcule o valor ganho com
multas por mês;
 Sabendo ainda que 5% dos carros sofrem desgaste ao longo do ano e são
retirados do catálogo de carros ofertados, e 1/8 do total de carros é
renovado, exiba a quantidade de carros que a locadora terá no final do ano*/

#include <stdio.h>

int main(){
    int carros, retirados, carrosTotais;
    float diaria, faturamento, multas;

    printf("Digite a quantidade de carros nessa locadora: ");
    scanf("%d", &carros);

    printf("Digite a diaria dos carros: ");
    scanf("%f", &diaria);

    faturamento = (diaria * (carros / 3)) * 365;
    multas = ((( diaria * 0.10 ) + diaria)* carros / 10) * 30;
    retirados = carros * 0.05;
    carrosTotais =  carros + (carros / 8) - retirados;

    printf("\nFaturamento Anual: R$ %.2f\n", faturamento);
    printf("Multas Mensais: R$ %.2f\n", multas);
    printf("Quantidade de carros no final do ano: %d\n", carrosTotais);
    
    return 0;
}