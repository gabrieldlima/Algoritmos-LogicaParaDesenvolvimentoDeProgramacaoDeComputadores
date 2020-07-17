//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20. Sugestão: |
|para verificar se o valor numérico é ímpar, dentro do laço de repetição, faça a verificação lógica desse condição com |
|a instrução if dentro do próprio laço, perguntando se o valor numérico do contador é ímpar (se o resto do número divi-|
|dido por 2 é diferente de 0); sendo, mostre-o; não sendo, passe para o próximo valor numérico.                        |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;

    printf("Números ímpares na faixa de 0 a 20:\n");

    for (i; i <= 20; i++) {

        if (i % 2 != 0) {

            printf("%d\n", i);

        }

    }

    return 0;
}
