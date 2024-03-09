#include <stdio.h>

/*Escreva um programa que leia um número e exiba se ele é positivo ou negativo.
*/

int main(){
//variaveis
int num;
//inicio
printf ("Escreve um numero inteiro ai meu patrao\n");
scanf ("%d", &num);

if (num > 0)
{
    printf ("Esse numero e positivo");
} else {
    printf ("Esse numero e negativo");
}

}