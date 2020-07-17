//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que calcule e apresente o valor do sómató- |
|rio dos N primeiros números inteiros, definidos por um operador:              |
|1 + 2 + 3 + 4 + 5 + 6 + 7 + ... + N.                                          |
*/

#include <stdio.h>

int summation(int num);

int main(void)
{
    int number;
    
    printf("Enter a integer: ");
    scanf("%d", &number);

    printf("The summation of %d is: %d\n", number, summation(number));

    return 0;
}

int summation(int num)
{
    int result = 0;

    for (int i = 1; i <= num; ++i)
    {
        result += i;
    }

    return result;
}
