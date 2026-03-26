#include <stdio.h>

int main(){
    int matricula, n1, n2, n3, inverso, soma, ordem, codigo;
    printf("Digite os tres ultimos digitos da sua matricula: ");
    scanf("%d", &matricula);
    n1 = matricula / 100;
    n2 = (matricula % 100) / 10;
    n3 = (matricula % 100) % 10;
    inverso = (n3*100 + n2*10 + n1);
    soma = inverso + matricula;
    ordem = ((soma/100)*1) + ((soma % 100)/10)*2 + ((soma %100)%10)*3;
    codigo = ordem % 10;
    printf("\n%d", soma);
    printf("\n%d", ordem);
    printf("\n%d", codigo);
    return 0;
}