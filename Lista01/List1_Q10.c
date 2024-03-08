#include <stdio.h>

//Converter um inteiro informado menor que 32 para sua representação em binário

int main(){
//variaveis
int num;
int divisao;
int binario;

binario = 0;

//inicio
printf ("Me manda um numero menor que 32 ai, meu nobre\n");
scanf ("%d", &num);

divisao = num;

binario = binario + num%2;
divisao = divisao/2;

binario = binario + divisao%2 * 10;
divisao = divisao/2;

binario = binario + divisao%2 * 100;
divisao = divisao/2;

binario = binario + divisao%2 * 1000;
divisao = divisao/2;

binario = binario + divisao/2 * 10000;

printf ("%d transformado em binario e: %d", num, binario);
}