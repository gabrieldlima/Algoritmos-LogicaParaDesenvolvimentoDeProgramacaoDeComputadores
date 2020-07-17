//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia um número inteiro e apresente um mensagem infor-|
|mando se o número é par ou ímpar.                                             |
*/

#include <stdio.h>

int odd_or_even(int num);

int main(void)
{
    int result;
    int number;

    printf("Enter a integer: ");
    scanf("%d", &number);

    result = odd_or_even(number);

    if (result == 0)
        printf("The number entered is even!\n");
    else
        printf("The number entered is odd!\n");

    return 0;
}

int odd_or_even(int num)
{
    int result;

    if (num % 2 == 0)
        result = 0;
    else
        result = 1;

    return result;
}
