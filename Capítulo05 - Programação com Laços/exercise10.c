//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit, de dez em dez graus, |
|iniciando a contagem em dez graus Celcius e finalizando em cem graus Celsius. O programa deve apresentar os valores   |
|das duas temperaturas. Fórmula: (Celsius * 9 / 5) + 32 = Fahrenheit.                                                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 10, formula;

    for (i; i <= 100; i += 10) {
    
        formula = (i * 9 / 5) + 32;
        printf("%d°C = %d°F\n", i, formula);

    }
    
    return 0;
}
