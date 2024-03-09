#include <stdio.h>

/*Escreva um programa que leia um número e exiba o seu módulo.
*/

int main(){
//variaveis
int num;
//inicio
printf ("Escreve um numero ai\n");
scanf ("%d", &num);

if (num < 0)
{
    num=-num;
}

printf ("O o modulo desse numero e %d\n", num);

}