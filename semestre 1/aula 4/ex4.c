/*Faça um programa que leia o valor da hora de trabalho de um funcionário e a
quantidade de horas trabalhadas no mês. A seguir, calcule o seu salário bruto, o
qual corresponde ao produto da quantidade de horas trabalhadas pelo valor da
hora de trabalho. Na sequência, calcule o salário líquido, o qual deve descontar
11% de IR, 8% de INSS e 5% de contribuição sindical. Todos os descontos são
aplicados ao valor do salário bruto. Ao final, imprima o salário bruto, o salário
líquido e o valor de cada desconto aplicado. Exibir todos os valores com 2 casas
decimais.*/

#include <stdio.h>

int main(){
    int horas;
    float horaTrabalho, salarioBruto, salarioLiquido, imposto, inss, sindical;

    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &horaTrabalho);

    printf("Digite a quantidades de horas trabalhadas: ");
    scanf("%d", &horas);

    salarioBruto = (float) horas*horaTrabalho;
    printf("Seu salario bruto sera de: %.2f", salarioBruto);

    imposto = salarioBruto*0.11;
    inss = salarioBruto*0.08;
    sindical = salarioBruto*0.05;
    salarioLiquido = salarioBruto-imposto-inss-sindical;

    printf("Seu salario descontado sera de: %.2f", salarioLiquido);
    
    return 0;
}