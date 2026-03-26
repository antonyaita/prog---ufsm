/*Calcule as raízes de uma equação de segundo grau. Lembre-se que
quando A for nulo, a equação é de primeiro grau (só tem uma raiz),
e também que quando delta é negativo a equação não tem raízes.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, grau;

    printf("digite o valor de a: ");
    scanf("%f", &a);

    printf("digite o valor de b: ");
    scanf("%f", &b);

    printf("digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("\nSeu a vale %.0f, logo sua equacao sera de primeiro grau e seu resultade de: %.2f\n", a, grau = c/b);
    }
    else 
    {
        float delta = pow(b , 2) - 4 * a * c;
        
        printf("delta vale: %.2f\n", delta);
        
        if (delta < 0)
        {
            printf("delta negativo, raiz nao existe :()");
        }
        else
        {
            float x1, x2;
            x1 = (-b + delta) / 2 * a;
            x2 = (-b - delta) / 2 * a;
            
            printf("x1 e igual a: %.2f\n", x1);
            printf("x2 e igual a: %.2f\n", x2);
        } 
    }
    
    return 0;
}