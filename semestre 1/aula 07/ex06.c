    /* 06) Depois de fazer o primeiro contato com uma civilização extraterrestre (os
    termopilitas), você ficou encarregado de fazer a conversão de datas entre as
    duas civilizações. Por coincidência o ano dos termopilitas tem a mesma
    duração do ano terrestre, mas é dividido de maneira diferente: a menor
    unidade de tempo é o blip, que dura 3 segundos terrestres. Quarenta blips
    fazem um tak, que é a próxima unidade. Quinze taks fazem um salek, e 30
    saleks fazem um mazel. Oito mazels fazem um brat e 73 brats completam o
    ano inteiro. Faça um programa que ofereça um menu com as seguintes
    opções:
    a) converter de terrestre para termopilita: para essa opção, o programa
    deve ler uma data terrestre no formato dia mês hora min seg, calcular e
    imprimir a data no formato termopilita: brat mazel salek tak blip.
    b) converter de termopilita para terrestre: para essa opção, o programa
    deve ler uma data termopilita no formato brat mazel salek tak blip,
    calcular e imprimir a data no formato terrestre (dia mês hora min seg).
    c) construa uma tabela de conversões das unidades de tempo
    termopilitas, dizendo o quanto cada uma delas vale nas unidades
    terrestres*/

    // Feito majoritariamente por ia, estava cansado e acabei n terminando

#include <stdio.h>

#define BLIP 3
#define TAK (40 * BLIP)
#define SALEK (15 * TAK)
#define MAZEL (30 * SALEK)
#define BRAT (8 * MAZEL)
#define ANO (73 * BRAT)

int main(){
    char opcao;

    printf("\nMenu de Conversao Termopilita:\n");
    printf("a) Terrestre para Termopilita\n");
    printf("b) Termopilita para Terrestre\n");
    printf("c) Exibir tabela de conversoes\n");
    printf("Escolha uma opcao: ");
    scanf(" %c", &opcao);

    if (opcao == 'a') {
        int dia, mes, hora, min, seg;
        printf("Digite a data terrestre (dd mm hh min seg): ");
        scanf("%d %d %d %d %d", &dia, &mes, &hora, &min, &seg);
        
        long totalSegundos = (long)((mes-1) * 30 + (dia-1)) * 86400 + hora * 3600 + min * 60 + seg;
        
        int brat = totalSegundos / BRAT;
        totalSegundos %= BRAT;
        int mazel = totalSegundos / MAZEL;
        totalSegundos %= MAZEL;
        int salek = totalSegundos / SALEK;
        totalSegundos %= SALEK;
        int tak = totalSegundos / TAK;
        totalSegundos %= TAK;
        int blip = totalSegundos / BLIP;
        
        printf("Data Termopilita: %d Brat, %d Mazel, %d Salek, %d Tak, %d Blip\n", brat, mazel, salek, tak, blip);

    } else if (opcao == 'b') {
        int brat, mazel, salek, tak, blip;
        printf("Digite a data termopilita (brat mazel salek tak blip): ");
        scanf("%d %d %d %d %d", &brat, &mazel, &salek, &tak, &blip);
        
        long totalSegundos = (long)brat * BRAT + mazel * MAZEL + salek * SALEK + tak * TAK + blip * BLIP;
        
        int diaTotal = totalSegundos / 86400;
        int segundosRestantes = totalSegundos % 86400;
        int hora = segundosRestantes / 3600;
        segundosRestantes %= 3600;
        int min = segundosRestantes / 60;
        int seg = segundosRestantes % 60;
        
        int mes = (diaTotal / 30) + 1;
        int dia = (diaTotal % 30) + 1;
        
        printf("Data Terrestre: %02d/%02d %02d:%02d:%02d\n", dia, mes, hora, min, seg);
    } else if (opcao == 'c') {
        printf("\n--- Tabela de Conversao (Termopilita -> Terrestre) ---\n");
        printf("1 Blip   = %d segundos terrestres\n", BLIP);
        printf("1 Tak    = %d Blips  = %d segundos\n", 40, TAK);
        printf("1 Salek  = %d Taks   = %d segundos (ou %.2f min)\n", 15, SALEK, SALEK/60.0);
        printf("1 Mazel  = %d Saleks = %d segundos (ou %.2f horas)\n", 30, MAZEL, MAZEL/3600.0);
        printf("1 Brat   = %d Mazels = %d segundos (ou %.2f dias)\n", 8, BRAT, BRAT/86400.0);
        printf("1 Ano    = %d Brats  = %d segundos (1 ano terrestre)\n", 73, ANO);
        printf("----------------------------------------------------\n");
    } 

    return 0;
}