#include<stdio.h>

square (int x)
{
    printf("O quadrado e: %d\n", x*x);
}

main()
{
    int num;
    printf("digite um numero:");
    scanf("%d", &num);
    square(num);
    return 0;
}