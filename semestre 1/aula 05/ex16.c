/*16. Faça um programa que leia o valor que um trabalhador ganha por hora e o número de horas
trabalhadas no mês. Calcule o seu salário no referido mês, sabendo-se que são descontados 14%
para o imposto de renda, 11% para o INSS e 1% para o sindicato. O programa deve exibir:
• o salário bruto
• o valor pago ao INSS
• o valor pago ao sindicato
• o salário líquido
*/
#include <stdio.h>

int main(){
    float horaValia, salarioBruto, inss, sindicato, salarioLiquid;
    int horasTrabalho;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &horaValia);

    printf("Digite quantas voce trabalhou: ");
    scanf("%d", &horasTrabalho);

    salarioBruto = horaValia * horasTrabalho;
    inss = salarioBruto * 0.11;
    sindicato = salarioBruto * 0.01;
    salarioLiquid = salarioBruto - inss - sindicato;

    printf("\nAqui esta seu salario do mes - bruto: R$%.2f", salarioBruto);
    printf("\nAqui esta seu desconto do mes - inss: R$%.2f", inss);
    printf("\nAqui esta seu desconto do mes - sindicato: R$%.2f", sindicato);
    printf("\nAqui esta seu salario do mes - liquido: R$%.2f", salarioLiquid);
    
    return 0;
}