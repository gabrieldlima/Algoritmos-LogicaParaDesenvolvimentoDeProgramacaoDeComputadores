//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia sucessivamente valores numéricos a apresente no final o somatório, a média e o total de |
|valores lidos. O programa deve ler os valores enquanto o usuário estiver fornecendo valores positivos. Ou seja, o pro-|
|grama só deve parar quando o usuário fornecer um valor negativo (menor que zero).                                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int num = 0, soma = 0;

    while (num >= 0) {

        printf("Digite um valor numérico inteiro[negativo para parar]: ");
        scanf("%d", &num);
        
        if (num > 0) {
            
            soma += num;
        
        }

    }

    printf("A soma de todos os valores digitados é igual a %d.\n", soma);

    return 0;
}
