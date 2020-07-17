//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um expoente que varie do |
|valor 0 até 15. O programa deve apresentar os valores 1, 3, 9, 27, ..., 14.348.907. Sugestão: leve em consideração as |
|definições matemáticas do cálculo de potência, em que qualquer valor numérico diferente de zero elevado a zero é 1, e |
|todo valor numérico elevado a 1 é ele próprio. Não use em hipótese nenhuma o operador aritmético de exponenciação a-  |
|presentado no capítulo 3; resolva o problema com a técnica de laço.                                                   |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0, numMult = 1;
    int base = 3;
    int power = 1;

    for (i = 0; i <= 15; i++) {

        if (i == 0) {

            printf("%d\n", 1);

        } else if (i == 1) {

            printf("%d\n", 3);
        
        } else {

            while (numMult <= i) {

                power *= base;
                numMult++;

            }
            
            printf("%d\n", power);

        }

    }
    
    return 0;
}
