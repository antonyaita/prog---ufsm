#include <stdio.h>

int main(){
    int x;
    float y;
    double z;

    printf("insira seu numero x: ");
    scanf("%d", &x);
    printf("Seu numero digitado foi: %d\n", x);

    printf("insira seu numero y: ");
    scanf("%f", &y);
    printf("Seu numero digitado foi: %.3f\n", y);
    
    printf("insira seu numero z: ");
    scanf("%lf", &z);
    printf("Seu numero digitado foi: %.4lf\n", z);
    return 0;
}