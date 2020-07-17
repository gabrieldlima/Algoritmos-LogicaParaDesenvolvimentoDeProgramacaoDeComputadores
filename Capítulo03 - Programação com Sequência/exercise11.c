//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente o valor da conversão em real(R$) de um valor lido em dolar(US$). O programa deve|
|solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário.                   |
*/

#include <stdio.h>
#include <stdlib.h>

//Valor do dólar em 13/01/2020: R$4.15

int main(){
    
    float dolarCotacao, dolarUsuario, conversao;

    printf("CONVERSOR DE MOEDA(US$ >>> R$)\n");
    
    printf("Cotação do Dólar: R$");
    scanf("%f", &dolarCotacao);
    printf("Quanto Dólares você tem? U$");
    scanf("%f", &dolarUsuario);

    conversao = dolarUsuario * dolarCotacao;

    printf("Com U$%.2f você pode comprar R$%.2f.\n", dolarUsuario, conversao);

    return 0;
}
