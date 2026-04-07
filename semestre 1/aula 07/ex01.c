/*1) Para incentivar a economia de água, uma empresa de abastecimento alterou
os preços de seu fornecimento de modo que, proporcionalmente, os clientes
que consumirem menos água paguem menos pelo metro cúbico. Todo cliente
paga mensalmente uma assinatura de R$ 7,00, que inclui uma franquia de
10m3 de água. Isto é, para qualquer consumo entre 0 e 10m3 , o consumidor
paga a mesma quantia de R$ 7,00 (note que o valor da assinatura deve ser
pago mesmo que o consumidor não tenha consumido água). Acima de 10m3,
cada metro cúbico subsequente tem um valor diferente, dependendo da faixa
de consumo, conforme tabela abaixo. São sobradas apenas quantidades
inteiras de metros cúbicos.
Assim, por exemplo, se o consumo foi de 120m3
, o valor da conta é:
- R$ 7,00 da assinatura básica;
- R$ 20,00 pelo consumo no intervalo 11-30m3;
- R$ 140,00 pelo consumo no intervalo 31-100m3;
- R$ 100,00 pelo consumo no intervalo 101-120m3;
Logo, o valor da conta de água é R$ 267,00.
Faça um programa que leia o consumo de uma residência, em m3, calcule e
imprima o valor de sua conta de água. */
#include <stdio.h>

int main(){
    int consumo, preco = 7;

    printf("Digite o valor do consumo do mes: ");
    scanf("%d", &consumo);

    preco = 7;

    if (consumo > 10) 
    {
        if (consumo <= 30) 
        {
            preco += (consumo - 10) * 1;
        } 
        else 
        {
            preco += (30 - 10) * 1; 
        }
    }

    if (consumo > 30) 
    {
        if (consumo <= 100) 
        {
            preco += (consumo - 30) * 2;
        } 
        else 
        {
            preco += (100 - 30) * 2;
        }
    }

     if (consumo > 100) 
    {
        preco += (consumo - 100) * 5;
    }

    printf("Sua conta sera de: R$%d", preco);

    return 0;
}