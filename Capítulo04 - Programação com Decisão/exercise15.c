//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação somente se o resulta-|
|do for maior que 30.                                                                                                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, mult;

    printf("Digire um número inteiro qualquer: ");
    scanf("%i", &num);

    mult = num * 2;

    if (mult > 30){

        printf("O valor digitado multiplicado por 2 é igual a: %i.\n", mult);

    }

    return 0;
}
