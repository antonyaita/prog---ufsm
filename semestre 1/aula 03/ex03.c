#include <stdio.h>

int main(){
    float celcius;
    printf("Insira o numero em Celcius: ");
    scanf("%f", &celcius);

    float conversao = (celcius * 1.8) + 32;

    printf("Aqui esta em Fahrenheit: %.1f", conversao);
    return 0;
}