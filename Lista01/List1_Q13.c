#include <stdio.h>

//Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em
//sequência de uma resistência R3. Faça um algoritmo para calcular a resistência
//equivalente desse circuito. 


int main(){
//variaveis
float r1, r2, r3, req;

//inicio
printf ("Qual o valor da primeira resistensia?\n");
scanf ("%f", &r1);

printf ("Qual o valor da segunda resistensia?\n");
scanf ("%f", &r2);

printf ("Qual o valor da terceira resistensia?\n");
scanf ("%f", &r3);

//rep em paralelo
req = (1/r1+1/r2); //formula para encontra 1/req, porem nos queremos req/1
req = req/req/req; // aqui divide o resultado por ele mesmo duas vezes, ou seja, elevamos a -1, invertendo-o.

//req em serie
req = req+r3;

printf ("A resistencia equivalente do circuito e %f", req);

}