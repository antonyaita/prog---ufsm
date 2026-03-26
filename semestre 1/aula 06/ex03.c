/*3) Leia um número e, se ele for positivo, imprima seu inverso (o
inverso do número n é dado por 1/n). Caso contrário, imprima o
valor absoluto do número (função fabs, math.h).*/

#include <stdio.h>
#include <math.h>

int main(){
    float a;
    
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    if (a > 0)
    {
        printf("O numero e positivo. O inverso e: %.2f\n", 1/a);
    }
    else
    {
        printf("O numero nao e positivo. O valor absoluto (fabs) e: %.2f\n", fabs(a));
    }
    
    return 0;
}