//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente o somatório dos N primeiros números intei- |
|ros, definidos por um operador (1 + 2 + 3 + 4 + 5 + 6 + 7 + ... + N).         |
*/

#include <stdio.h>

int sum(int num, int *summation);

int main(void)
{
    int number;
    int summation = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    sum(number, &summation);

    printf("The summation of %d is: %d\n", number, summation);

    return 0;
}

int sum(int num, int *summation)
{
    for (int i = 0; i <= num; i++)
        *summation += i;
}
