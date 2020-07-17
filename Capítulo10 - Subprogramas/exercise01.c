//Date: June, 2020
//Author: Gabrielgscript

/*
|Criar um algoritmo que calcule o valor de uma prestação em atraso. Para tanto| 
|utilizar a fórmula PREST = VALOR + (VALOR * (TAXA / 100) * TEMPO). Apresentar| 
|o valor da prestação.                                                        |
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
