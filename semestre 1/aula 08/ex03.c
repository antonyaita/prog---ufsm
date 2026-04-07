/*3) Leia o código de um produto e exiba a sua classificação, conforme a
tabela abaixo:
1 - alimento nao perecivel
2, 3 ou 4 - alimento perecivel
5, 6 - higiene pessoal
7 - Utensilios domesticos
8 ate 12 -  limpeza*/

#include <stdio.h>

int main(){
    int codigo;

    printf("Digite o codigo do produto");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1: printf("Alimento nao perecivel");
        break;
    case 2: case 3: case 4: printf("Alimento perecivel");
        break;
    case 5: case 6: printf("Higiene pessoal");
        break;
    case 7: printf("Utensilio Domestico");
        break;
    case 8: case 9: case 10: case 11: case 12: printf("Limpeza");
        break;    
    default: printf("Codigo Invalido");
        break;
    }

    return 0;
}
