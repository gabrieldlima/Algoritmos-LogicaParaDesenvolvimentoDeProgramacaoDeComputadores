//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de um valor númerico inteiro positivo ou negativo representado pela variável N e apresentar o valor |
|lido como sendo positivo. Dica: se o valor lido for menor que zero, ele deve ser multiplicado por -1.                 |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, x;

    printf("Digite um número inteiro qualquer: ");
    scanf("%i", &n);

    if (n < 0){

        x = n * -1;
        printf("O valor lido para positivo foi: %i.\n", x);

    }else{

        printf("O valor digitado foi %i.\n", n);

    }

    
    return 0;
}
