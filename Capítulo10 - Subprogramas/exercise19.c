//Date: June, 2020
//Author: Gabrielgscript

/*
|Criar um programa de computador que calcule e apresente o valor de uma presta-|
|ção em atraso. Utilize a fórmula PREST = VALOR (VALOR * (TAXA / 100) * TEMPO).|
*/

#include <stdio.h>

float installment(float value, float rate, int time);

int main(void)
{
    float price, rate;
    int paymentTime;

    printf("Price of product: US$");
    scanf("%f", &price);
    printf("Interest rate: ");
    scanf("%f", &rate);
    printf("Payment time(in months): ");
    scanf("%d", &paymentTime);

    printf("Installment: U$%.2f\n", installment(price, rate, paymentTime));

    return 0;
}

float installment(float value, float rate, int time)
{
    float result;

    result = value + (value * (rate / 100) * time);

    return result;
}
