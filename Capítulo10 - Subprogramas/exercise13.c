//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente como resultado um número positivo, mesmo   |
|que a entrada tenha sido feita com um valor negativo.                         |
*/

#include <stdio.h>

int positiveNumber(int);

int main(void)
{
    int num;

    printf("Enter a integer: ");
    scanf("%d", &num);

    printf("The number entered was: %d\n", positiveNumber(num));

    return 0;
}

int positiveNumber(int number)
{
    int result;

    if (number >= 0)
        result = number;
    else
        result = number * -1;

    return result;
}
