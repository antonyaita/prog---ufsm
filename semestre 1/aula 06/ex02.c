/*2) Leia um número e verifique se o número é positivo, negativo ou
nulo, imprimindo mensagem adequada.*/

#include <stdio.h>

int main(){
    int a;
    printf("Digite valor de a: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("a e positivo");
    }
    else if (a < 0)
    {
        printf("a e negativo");
    }
    else
    {
        printf("a e nulo");
    }

    return 0;
}