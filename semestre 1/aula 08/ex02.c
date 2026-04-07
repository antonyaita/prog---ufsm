/*2) Leia dois valores e um caractere, representando uma operação
(soma, subtração, multiplicação e divisão). A seguir, o programa
deve realizar a operação solicitada e exibir o resultado. Obs.: na
operação de divisão, se o denominador for zero, o programa deve
informar que a operação é inválida. */

#include <stdio.h>

int main(){
    int a, b;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite a operacao (s = soma, m = menos, d = divisao, x = multiplicacao): ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case 's': printf("Sua soma de %d + %d resulta: %d", a, b, a+b);
        break;
    case 'm': printf("Sua subtracao de %d - %d resulta: %d", a, b, a-b);
        break;
    case 'd': ( a == 0 || b == 0) ? printf("zero nao e divisivel") : printf("Sua divisao de %d / %d resulta: %.2f", a, b, (float)a/b);    
        break;
    case 'x': printf("Sua multiplicacao de %d * %d resulta: %d", a,  b, a * b);
        break;
    default: printf("Digite direito");
        break;
    }

    return 0;
}