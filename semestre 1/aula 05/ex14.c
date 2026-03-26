/*14. Três amigos jogaram na mega sena. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada contribuiu para a aposta. Faça um programa que leia quanto
cada apostador investiu, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base
no valor investido.*/
#include <stdio.h>

int main(){
    int premio, p1,p2,p3, pt;
    float g1,g2,g3;

    printf("Quanto foi o valor do premio? ");
    scanf("%d", &premio);

    printf("Quanto a primeira pessoa contribuiu? ");
    scanf("%d", &p1);

    printf("Quanto a segunda pessoa contribuiu? ");
    scanf("%d", &p2);

    printf("Quanto a terceira pessoa contribuiu? ");
    scanf("%d", &p3);

    pt = p1+p2+p3;
    g1 = (((p1*100)/pt)*0.01)*premio;
    g2 = (((p2*100)/pt)*0.01)*premio;
    g3 = (((p3*100)/pt)*0.01)*premio;

    printf("%.2f", g1);
}