/*5) Leia um peso na Terra e o número de um planeta, calcule e imprima
o valor de seu peso neste planeta. A tabela abaixo exibe os planetas
juntamente com o valor das gravidades relativas à Terra. Para calcular
o peso no planeta, utilize a fórmula abaixo: */

#include <stdio.h>



int main(){
    int peso, planeta;

    printf("Digite seu peso: ");
    scanf("%d", &peso);

    printf("Digite qual planeta vc quer: ");
    scanf("%d", &planeta);

    switch (planeta)
    {
    case 1:
        printf("Seu peso no planeta Mercurio e de: %.2f", (float)(peso/10)*0.37);
        break;
    case 2:
        printf("Seu peso no planeta Venus e de: %.2f", (float)(peso/10)*0.88);
        break;
    case 3:
        printf("Seu peso no planeta Marte e de: %.2f", (float)(peso/10)*0.38);
        break;
    case 4:
        printf("Seu peso no planeta Jupiter e de: %.2f", (float)(peso/10)*2.64);
        break;
    case 5:
        printf("Seu peso no planeta Saturno e de: %.2f", (float)(peso/10)*1.15);
        break;
    case 6:
        printf("Seu peso no planeta Urano e de: %.2f", (float)(peso/10)*1.17);
        break;
    default:
        printf("Voce digitou o numero errado!");
        break;
    }

    return 0;
}