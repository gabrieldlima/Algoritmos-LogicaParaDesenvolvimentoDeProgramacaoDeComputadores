//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia quatro valores númericos inteiros (representados pelas variáveis A, B, C e D). Ao final|
|o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da so-|
|ma (variável S) do segundo com o quarto valor.                                                                       |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a, b, c, d, s, p;
    
    printf("Digite quatro números inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);
    printf("4º- ");
    scanf("%i", &d);

    p = a * c;
    s = b + d;

    printf("O produto do primeiro valor com o terceiro é igual a %i.\n"
    "A soma do segundo valor com o último é igual a %i.\n", p, s);

    return 0;
}
