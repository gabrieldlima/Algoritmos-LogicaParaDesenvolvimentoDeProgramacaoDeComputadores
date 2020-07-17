//Date: January, 2020
//Author: Gabrielgscript;

/*
|Calcular e apresentar o valor do volume de uma lata de oléo, utilizando a fórmula:|
|VOLUME <-- 3.14159 * R ^ 2 * ALTURA.                                              |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float r, altura, volume;

    printf("CÁLCULO DE VOLUME\n");

    printf("Raio: ");
    scanf("%f", &r);
    printf("Altura: ");
    scanf("%f", &altura);

    volume = 3.14159 * pow(r,2) * altura;

    printf("Volume: %.2fcm³\n", volume);

    return 0;
}
