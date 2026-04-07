#include <stdio.h>

int razao;
int termo;

int main(){
    printf("Digite o numero da sua razao: ");
    scanf("%d", &razao);

    printf("Digite o numero do primeiro termo: ");
    scanf("%d", &termo);

    int progressao = (9 * razao) + termo;

    printf("o numero do decimo termo e: %d", progressao);
    return 0; 
}