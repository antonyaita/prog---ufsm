/*Leia três valores correspondentes às medidas dos lados (a, b e c)
de uma figura geométrica, e verifique se eles formam ou não um
triângulo. Caso os valores formem triângulo calcule e exiba a sua
área. Caso contrário, informe que eles “Não formam um triângulo”.
Obs.: Para construir um triângulo é necessário que a medida de
qualquer um dos lados seja menor que a soma das medidas dos
outros dois e maior que o valor absoluto da diferença entre essas
medidas. A área de um triângulo pode ser calculada em função de
seus lados:*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a < (b + c) && a > (b - c))
    {
        float s = (a + b + c) / 2.0; 
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Este e um triangulo, sua area se da por: %.2f", area);
    }
    else
    {
        printf("Nao e uma piramide, tente novamente :(");
    }

    return 0;
}