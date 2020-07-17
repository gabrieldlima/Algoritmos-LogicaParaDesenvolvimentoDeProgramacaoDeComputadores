//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente o valor da conversão em dólar(US$) de um valor lido em real(R$). O programa deve|
|solicitar o valor da cotação do real e também a quantidade de reais disponível com o usuário.                      |
*/

#include <stdio.h>
#include <stdlib.h>

//Valor do real em 13/01/2020: R$0.24

int main(){

    float realCotacao, realUsuario, conversao;

    printf("CONVERSOR DE MOEDAS(R$ >>> US$)\n");
    
    printf("Cotação do Real: US$");
    scanf("%f", &realCotacao);
    printf("Quantos Reais você tem? ");
    scanf("%f", &realUsuario);

    conversao = realUsuario * realCotacao;

    printf("Com R$%.2f você pode comprar US$%.2f.\n", realUsuario, conversao);

    return 0;
}
