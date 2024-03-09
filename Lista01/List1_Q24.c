#include <stdio.h>

/*Escreva um programa que leia três números e mostre o maior entre eles.
*/

int main(){
//variaveis
int num1,  num2, num3;

//inicio
printf ("Oba meu nobre, fala 3 numeros ai\n");
scanf ("%d", &num1);
scanf ("%d", &num2);
scanf ("%d", &num3);

if (num1 > num2 && num1 > num3)
{
    printf ("%d e o maior numero", num1);
} 
if (num2 > num1 && num2 > num3)
{
    printf ("%d e o maior numero", num2);
} 
if (num3 > num2 && num3 > num1)
{
    printf ("%d e o maior numero", num3);
} 


}