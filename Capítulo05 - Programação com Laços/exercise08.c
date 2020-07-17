//Date: January, 2020
//Author: Gabrielgscript;

/*
|Escreva um programa que apresente como resultado a potência de uma base qualquer elevada a um expoente qualquer, ou   |
|seja, B**E, em que B é o valor da base e E é o valor do expoente. Considere apenas a entrada de valores inteiros e po-|
|sitivos, ou seja, de valores naturais. Sugestão: não utilize a o formato "base ** expoente", pois é uma solução muito |
|trivial. Use a técnica de laço,em que o valor da base deve ser multiplicado o número de vezes determinado no expoente |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    int base, expoente, potencia = 1;

    printf("CÁLCULO DE EXPONENCIAÇÃO\n");

    printf("BASE: ");
    scanf("%d", &base);
    printf("EXPOENTE: ");
    scanf("%d", &expoente);

    while (i <= expoente) {

        potencia *= base;
        i++;

    }

    printf("POTÊNCIA: %d\n", potencia);

    return 0;
}
