/*Faça um programa que leia as dimensões (em m) de um terreno retangular e de
uma casa (também retangular) sobre este terreno. A seguir, calcule e exiba a área
livre do terreno, em m2 e em percentual.*/

#include <stdio.h>

int main(){
    float larguraTerreno, profundidadeTerreno, areaTerreno, larguraCasa, profundidadeCasa, areaCasa, areaLivre;

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &larguraTerreno);

    printf("Digite a profundidade do terreno (em metros): ");
    scanf("%f", &profundidadeTerreno);

    areaTerreno = larguraTerreno*profundidadeTerreno;

    printf("Digite a largura do casa (em metros): ");
    scanf("%f", &larguraCasa);

    printf("Digite a profundidade do casa (em metros): ");
    scanf("%f", &profundidadeCasa);

    areaCasa = larguraCasa*profundidadeCasa;

    areaLivre = areaTerreno-areaCasa;

    printf("O tamanho livre da casa e de: %.2f\nAqui em porcentagem: %.2f", areaLivre, (areaLivre/areaTerreno)*100);
    
    return 0;
}