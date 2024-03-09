#include <stdio.h>

/*Escreva um programa que leia um número e imprima se este número é ou não par
*/

int main(){
//variaveis
int num, resto;
//inicio
printf ("Escreve um numero ai\n");
scanf ("%d", &num);

resto = num%2;

if (resto == 0)
{
    printf ("Esse numero e par");
} else {
    printf ("Esse numero e impar");
}

}