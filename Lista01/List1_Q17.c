#include <stdio.h>

/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
distribuição das notas de acordo com o critério da distribuição ótima (considere existir
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).
====================================================================================================
*/

int main(){
//variaveis
int valor;
int um, dois, cinco, dez, vinte, cinquenta, cem;

//inicio
printf ("Qual valor tu quer sacar, meu lindo?");
scanf ("%d", &valor);

cem = valor/100;
valor = valor%100;

cinquenta = valor/50;
valor = valor%50;

vinte = valor/20;
valor = valor%20;

dez = valor/10;
valor = valor%10;

cinco = valor/5;
valor = valor%5;

dois = valor/2;
um = valor%2;

printf ("O caixa devera liberar %d notas de cem\n", cem);
printf ("%d notas de cinquenta\n", cinquenta);
printf ("%d notas de vinte\n", vinte);
printf ("%d notas de dez\n", dez);
printf ("%d notas de cinco\n", cinco);
printf ("%d notas de dois\n", dois);
printf ("%d notas de um\n", um);

}