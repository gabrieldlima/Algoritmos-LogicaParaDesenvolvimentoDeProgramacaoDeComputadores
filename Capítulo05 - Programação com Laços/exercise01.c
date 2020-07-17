//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente como resultado os quadrados dos números inteiros existentes na faixa de valores de |
|15 a 200.                                                                                                             |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    double i = 15;

    for (i; i <= 200; i++) {

        printf("%.0lf² = %.0lf\n",i , pow(i, 2));

    }
    
    return 0;
}
