//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia o valor númerico correspondente ao salário mensal (variável SM) de um trabalhador e tam-|
|bém faça a leitura do valor do percentual de reajuste (variável PR) a ser atríbuido. Apresentar o valor do novo salá- |
|rio (variável NS).                                                                                                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float sm, pr, ns;

    printf("CÁLCULO DE REAJUSTE SALARIAL\n");

    printf("Salário Médio: R$");
    scanf("%f", &sm);
    printf("Percentual de Reajuste: ");
    scanf("%f", &pr);

    ns = sm + (sm * (pr / 100));

    printf("Novo salário: R$%2.f\n", ns);

    return 0;
}
