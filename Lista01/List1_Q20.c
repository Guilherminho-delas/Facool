#include <stdio.h>

/*Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestaçõ
*/

int main(){
//variaveis
float valorf;
int valori;
float entrada, parcelas;

//inicio
printf ("Qual o valor da mercadoria?\n");
scanf("%f", &valorf);

//transforma o valor float em valor inteiro
valori = valorf*100; 
valori = valori/100;

//usa o valori pra encontrar o valor da entrada e das parcelas
parcelas = valori/3;
entrada = valorf - 2*parcelas;

printf ("O valor da entrada fica %f e o valor das parcelas ficam %f", entrada, parcelas);

}