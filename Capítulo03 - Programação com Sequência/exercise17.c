//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que calcule a apresente o valor so resultado de uma área de circunferência (variável A). O pro- |
|grama deve solicitar a entrada do valor do raio da circunferência (variável R). Para a execução deste problema utili-|
|ze a fórmula A <-- 3.14159265 * R ^ 2.                                                                               |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float r, a;

    printf("ÁREA DE CIRCUNFERÊNCIA\n");

    printf("Raio da circunferência: ");
    scanf("%f", &r);
    
    a = 3.14159256 * pow(r, 2);

    printf("Área total: %.2fm²\n", a);

    return 0;
}
