//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Faherenheit. A fórmula de conversão é:|
|F <-- (9 * C + 160) / 5, sendo F a temperatura em Faherenheit e C a temperatura em Celsius.                   |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float f, c;

    printf("CONVERSOR DE TEMPERATURAS\n");
    
    printf("Temperatura em Celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("Temperatura em Faherenheit: %.1f\n", f);

    return 0;
}
