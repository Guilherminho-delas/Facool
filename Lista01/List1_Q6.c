#include <stdio.h>

//Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles

int main(){
    //variaveis
    int num1, num2;
    int quociente, resto;

    //inicio
    printf ("Digita dois numeros inteiros ai, papar\n");
    scanf ("%d", &num1);
    scanf ("%d", &num2);

    quociente = num1/num2;
    resto = num1%num2;

    printf ("O quociente da disao e: %d\nO resto e:%d", quociente, resto);
}