/*12. Faça um programa para ajudar os vendedores de uma loja. A partir de um valor total lido,
calcule e exiba:
• o total a pagar com desconto de 10%
• o valor de cada parcela, no parcelamento de 3× sem juros
• a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
• a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total)*/
#include <stdio.h>

int main(){
    float valor, valorDesconto, valorPacela, comissaoDesconto, comissaoParcela;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    valorDesconto = valor * 0.10;
    valorPacela = valor / 3;
    comissaoDesconto = valorDesconto * 0.05;
    comissaoParcela = valor * 0.05;

    printf("\nO valor com desconto sera de: R$%0.2f", valorDesconto);
    printf("\nO valor de cada parcela sera de: R$%.2f", valorPacela);
    printf("\nO valor da comissao c/desconto sera de: R$%.2f", comissaoDesconto);
    printf("\nO valor da comissao c/parcelado sera de: R$%.2f", comissaoParcela);

    return 0;
}