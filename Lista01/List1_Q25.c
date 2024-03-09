#include <stdio.h>

/*Escreva um programa que leia o número equivalente ao mês e imprima a quantidade de
dias deste mês
*/

int main(){
//variaveis
int num;
//inicio
printf ("diz o numero de um mes ai, patrao\n");
scanf ("%d", &num);

if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10)
{
    printf ("O mes %d tem 31 dias", num);
}
if (num == 4 || num == 6 || num == 9 || num == 11 || num == 12)
{
    printf ("O mes %d tem 30 dias", num);
}
if (num == 2)
{
    printf ("Fevereiro nao mano, ninguem gosta de fevereiro :/\n");
}

}