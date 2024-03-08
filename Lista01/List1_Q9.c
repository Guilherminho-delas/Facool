#include <stdio.h>

//Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, dado
//seu raio e sua altura.

int main(){
//variaveis
float raio, altura, volume;

//inicio
printf ("Qual o raio da sua lata, patrao?\n");
scanf ("%f", &raio);

printf ("Qual a altura da sua lata, patrao?\n");
scanf ("%f", &altura);

volume = raio*raio * 3.14 * altura;

printf ("O valor do volume e %f", volume);

}