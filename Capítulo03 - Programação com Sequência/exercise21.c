//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera. Utilize a fórmula:|
|VOLUME <-- (4 / 3) * 3.1415 * (R ^ 3).                                                                        |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float r, volume;

    printf("CALCULO PARA VOLUME DE UMA ESFERA\n");

    printf("Medida do Raio: ");
    scanf("%f", &r);

    volume = (4 / 3) * 3.1415 * pow(r, 3);

    printf("Volume: %.2fcm²\n", volume);
    
    return 0;
}
