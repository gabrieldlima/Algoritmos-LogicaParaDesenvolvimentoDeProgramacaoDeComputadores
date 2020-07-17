//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construi um programa que apresente como resultado a fatorial dos valores ímpares situados na faixa de 1 até 10.       |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1, count = 1, fatorial = 1;

    while (i <= 10) {

        if (i % 2 != 0) {

            while (count <= i) {

                fatorial *= count;
                count++;

            }

            printf("Fatorial de %d! = %d\n", i, fatorial);

        }

        i++;

    }
    
    return 0;
}
