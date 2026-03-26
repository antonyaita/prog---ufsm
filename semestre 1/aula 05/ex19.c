    /*19. Faça um programa para calcular e imprimir o número de lâmpadas necessárias para iluminar um
    determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em
    watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência
    necessária é de 18 watts por m2*/

#include <stdio.h>

int main(){
    float potLamp, largura, comprimento, area, Lamptotal;

    printf("Quanto de pot tem a lampada? ");
    scanf("%f", &potLamp);

    printf("Quanto de largura tem o comodo? ");
    scanf("%f", &largura);

    printf("Quanto de comprimento tem o comodo? ");
    scanf("%f", &comprimento);

    area = comprimento * largura;

    Lamptotal = (area * 18) / potLamp + 0.99;

    printf("vai ser necessario %.0f lampadas", Lamptotal);

    return 0;
}