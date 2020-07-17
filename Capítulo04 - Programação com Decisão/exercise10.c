//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler um valor numérico inteiro e apresentar uma mensagem informando se o valor fornecido é ímpar ou par.               |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite um valor numérico qualquer: ");
    scanf("%i", &numero);

    if (numero % 2 == 0){

        printf("O número %i é par.\n", numero);

    }else{

        printf("O número %i é ímpar.\n", numero);

    }

    return 0;
}
