//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a fórmula: |
|PRESTAÇÃO <-- VALOR + (VALOR * (TAXA /100) * TEMPO).                                               |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor, taxa, tempo, prestacao;

    printf("CÁLCULO DE PRESTAÇÃO\n");

    printf("Valor da prestação: R$");
    scanf("%f", &valor);
    printf("Valor da taxa: R$");
    scanf("%f", &taxa);
    printf("Tempo em atraso(dias): ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("\nTotal a pagar(com juros): %.2f\n", prestacao);

    return 0;
}
