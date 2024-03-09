#include <stdio.h>

//Escreva um programa que permute o valor de duas variáveis inteiras.

int main(){
//variaveis
int num1, num2, troca;

//inicio
printf ("Fala um valor pra variavel 1\n");
scanf ("%d", &num1);

printf ("Agora um valor pra variavel 2\n");
scanf ("%d", &num2);

troca = num1;
num1 = num2;
num2 = troca;

printf ("Variavel1: %d\nVariavel2: %d\n", num1, num2);
printf ("Codigo besta da porr viu ;-;");

}