//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente o resultado inteiro da divisão de dois números quaisquer, representando o dividendo|
|e o divisor da divisão a ser processada. Sugestão: para o programa, não utilize o operador aritmético de divisão com  |
|quocinte inteiro div(). Use uma solução baseada em laço. O programa deve apresentar como resultado (quociente) quantas|
|vezes o divisor cabe no dividendo.                                                                                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int dividendo = 0, divisor = 0, auxiliar = 0, quociente = 0;

    printf("DIVISÃO INTEIRA\n");

    printf("Dividendo: ");
    scanf("%d", &dividendo);
    printf("Divisor: ");
    scanf("%d", &divisor);
    
    while (auxiliar <= dividendo) {
        
        auxiliar += divisor;
        quociente++;

    }
    
    printf("%d / %d = %d\n", dividendo, divisor, (quociente - 1));

    return 0;
}
