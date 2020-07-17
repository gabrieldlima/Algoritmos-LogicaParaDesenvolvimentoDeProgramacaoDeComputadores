//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler uma temperatura em graus Faherenheit e apresentá-la convertida em graus Celsius. A fórmula de conversão é:|
|C <-- ((F - 32) * 5) / 9, sendo F a temperatura em Faherenheit e C a temperatura em Celsius.                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float f, c;

    printf("CONVERSOR DE TEMPERATURAS\n");
    
    printf("Temperatura em Faherenheit: ");
    scanf("%f", &c);

    c = ((f - 32) * 5) / 9;

    printf("Temperatura em Celcius: %.1f\n", c);

    return 0;
}
