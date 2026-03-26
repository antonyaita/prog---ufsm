/*17. Faça um programa que receba um valor de combustível, calcule e mostre o valor desse mesmo
combustível saído da refinaria e todos os valores incluídos no preço final, com base nos seguintes
percentuais de despesas e impostos:
• 17% - Distribuição e Revenda
• 12% - Custo Etanol Anidro
• 28% - ICMS
• 7% - CIDE, PIS/PASEP e COFINS
 A saída do programa deve obedecer ao seguinte formato:
+ Valor na bomba: R$ <valor>
- Distribuição e Revenda (17%): R$ <valor>
- Custo Etanol Anidro (12%): R$ <valor>
- ICMS (28%): R$ <valor>
- CIDE, PIS/PASEP e COFINS (7%): R$ <valor>
= Valor da refinaria: R$ <valor>
 Exemplo de programa:
Entrada:
3.00
Saída:
+ Valor na bomba: R$ 3.00
- Distribuição e Revenda (17%): R$ 0.51
- Custo Etanol Anidro (12%): R$ 0.36
- ICMS (28%): R$ 0.84
- CIDE, PIS/PASEP e COFINS (7%): R$ 0.21
= Valor da refinaria: R$ 1.08*/

#include <stdio.h>

int main(){
    float valorComb, refinaria, distribuicao, etanol, icms, taxas;
    printf("Digite o preço do combustivel: ");
    scanf("%f", &valorComb);

    distribuicao = valorComb * 0.17;
    etanol = valorComb * 0.12;
    icms = valorComb * 0.28;
    taxas = valorComb * 0.07;
    refinaria = distribuicao + etanol + taxas;

    printf("\n+ Valor da bomba: R$%.2f", valorComb);
    printf("\n- Distribuicoo e Revenda (17%%): R$%.2f", distribuicao);
    printf("\n- Custo Etanol Anidro (12%%): R$%.2f", etanol);
    printf("\n- ICMS (28%%): R$%.2f", icms);
    printf("\n- CIDE, PIS/PASEP e COFINS (7%%): R$%.2f", taxas);
    printf("\n= valor da refinaria: R$%.2f", refinaria);

    return 0;
}