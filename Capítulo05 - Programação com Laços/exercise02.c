//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual deve ser apresentada de|
|acordo com sua forma tradicional.                                                                                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int number = 0, i = 0;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++) {

        printf("%d x %d = %d\n", number, i, (number * i));

    }

    
    return 0;
}
