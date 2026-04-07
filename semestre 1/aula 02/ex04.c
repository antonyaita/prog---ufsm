#include <stdio.h>

int main(){
    char palavra[25];  
    scanf("%s", &palavra);
    printf("Sua palavra foda: %s", palavra);
    printf("\nEntre aspas ela fica: \"%s\"", palavra);
    return 0;
}