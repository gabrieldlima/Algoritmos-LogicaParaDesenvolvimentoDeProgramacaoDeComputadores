//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente o valor de conversão em real (R$) de um va-|
|lor lido em dólar (US$). Devem ser solicitados por meio do programa principal |
|o valor da cotação do dólar e a quantidade de dólar disponível.               |
*/

#include <stdio.h>

float dollarToReal(float dollar, float price);

int main(void)
{
    float dollar;
    float price;

    printf("Price: ");
    scanf("%f", &price);
    printf("Dolar: US$");
    scanf("%f", &dollar);

    printf("Real: R$%.2f\n", dollarToReal(dollar, price));

    return 0;
}

float dollarToReal(float dollar, float price)
{
    float result;

    result = dollar * price;

    return result;
}
