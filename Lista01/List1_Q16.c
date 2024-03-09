#include <stdio.h>

//Escreva um programa para gerar o invertido de um número com três algarismos
//(exemplo: o invertido de 498 é 894).

int main(){
//variaveis
int num, invertido;
int centena, dezena, unidade;

//inicio
printf ("digita um numero de 3 digitos ai, papar.\n");
scanf ("%d", &num);

unidade = num%10;
num = num/10;
dezena = num%10;
centena = num/10;

invertido = unidade*100 + dezena*10 + centena;

printf ("Esse numero, magicamente...\n:O\nSe inverte\n");
printf ("%d\n", invertido);
printf ("TANDAM");

}