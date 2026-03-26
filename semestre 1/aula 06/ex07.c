/*7) Leia 2 números e um caractere, representando as operações +,
-, * e /. O programa deve imprimir o resultado da operação
efetuada. Teste seu programa com a entrada: 3.6, 4 e ‘/’. A
seguir, teste com 3.2, 0.0 e ‘/’ e corrija3. seu programa para
imprimir uma mensagem caso não seja possível efetuar um
cálculo.*/

#include <stdio.h>

int main(){
    float a, b;
    char c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite a expressao (+, -, * ou /): ");
    scanf(" %c", &c);

    if (c == '+') {
        int soma = a + b;
        printf("Resultado: %d\n", soma);
    } 
    else if (c == '-') {
        int sub = a - b;
        printf("Resultado: %d\n", sub);
    } 
    else if (c == '*') {
        int mult = a * b;
        printf("Resultado: %d\n", mult);
    } 
    else if (c == '/') {
        if (b == 0.0) {
            printf("Erro: Nao eh possivel dividir por zero.\n");
        } else {
            float div = a / b;
            printf("Resultado: %.2f\n", div);
        }
    } 
    else {
        printf("Operacao invalida.\n");
    }
}
