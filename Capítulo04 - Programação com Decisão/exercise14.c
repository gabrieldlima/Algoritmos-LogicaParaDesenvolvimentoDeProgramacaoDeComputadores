//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de três valores inteiros desconhecidos representados pelas variáveis A, B e C. Somar os valores for-|
|necidos e apresentar o resultado se for maior ou igual a 100.                                                         |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, soma;

    printf("Digite três valores numéricos inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);

    soma = a + b + c;

    if (soma >= 100){

        printf("A soma dos números digitados é igual a: %i.\n", soma);

    }

    return 0;
}
