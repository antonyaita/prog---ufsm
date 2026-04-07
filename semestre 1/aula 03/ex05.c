#include <stdio.h>

int main (){
 int dias; 
 int anos;
 
 printf ("Entre com o numero de anos: "); 
 scanf ("%d",&anos);
 dias=anos*365; 
 printf ("\n\n%d anos equivalem a %d dias.\n",anos,dias);
 return 0;
 }