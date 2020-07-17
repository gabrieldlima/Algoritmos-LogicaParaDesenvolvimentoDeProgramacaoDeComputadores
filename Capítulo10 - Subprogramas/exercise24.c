//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente o valor da conversão em dólar de um valor  |
|lido em real. O programa deve solicitar o valor da cotação do dólar e também a|
|quantidade de dólares disponíveis com o usuário.                              |
*/

#include <stdio.h>

float realToDollar(float real, float price);

int main(void)
{
    float real;
    float price;

    printf("Price: ");
    scanf("%f", &price);
    printf("Real: US$");
    scanf("%f", &real);

    printf("Dollar: R$%.2f\n", realToDollar(real, price));

    return 0;
}

float realToDollar(float real, float price)
{
    float result;

    result = real * price;

    return result;
}
