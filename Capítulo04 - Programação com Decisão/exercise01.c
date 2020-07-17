//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e apresentar o resultado da  |
|diferença do maior valor pelo menor valor.                                                                            |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, r;

    printf("Digite dois números inteiros:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);

    if (a > b){

        r = a - b;
        printf("A diferença entre %i e %i é igual a %i\n.", a, b, r);

    }else{

        r = b - a;
        printf("A diferença entre %i e %i é igual a %i.\n", b, a, r);

    }

    return 0;
}
