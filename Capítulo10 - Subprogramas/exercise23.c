//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente o valor da conversão em real de um valor   |
|lido em dolar. O programa deve solicitar o valor da cotação do dólar e também |
|a quantidade de dólares disponíveis com o usuário.                            |
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
