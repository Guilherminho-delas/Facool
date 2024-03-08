#include <stdio.h>

//Dado que a fórmula para conversão de Fahrenheit para Celsius é C = 5/9 (F – 32), leu um
//valor de temperatura em Fahrenheit e exibi-lo em Celsius 

int main(){
//variaveis
int F, C;

//inicio
printf ("digita uma temperatura em fahrenheit ai, meu campeao\n");
scanf ("%d", &F);

C = 5 * (F-32) /9;

printf ("Essa temperatura em graus celcias e %d", C);

}