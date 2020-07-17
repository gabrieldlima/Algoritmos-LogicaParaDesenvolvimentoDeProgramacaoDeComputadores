//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia três valores (A, B e C) e apresente como resul- |
|tado o quadrado da soma dos três valores lidos.                               |
*/

#include <stdio.h>

int power(int, int);
int squareSum(int, int, int);

int main(void)
{
    int A, B, C;

    for (int i = 1; i <= 3; ++i)
    {
        printf("Enter a %dº integer: ", i);

        if (i == 1)
            scanf("%d", &A);
        else if (i == 2)
            scanf("%d", &B);
        else
            scanf("%d", &C);
    }

    printf("The square of the sum of the three values is: 2: %d\n",
    squareSum(A, B, C));

    return 0;
}

int power(int base, int exponent)
{
    int pow;
    int x, temp;

    for (int i = 1; i < exponent; ++i)
    {
        if (i == 1)
            x = base * base;

        temp = x;

        if (i > 1)
        {
            x = temp * base;
        }
    }

    pow = x;

    return pow;
}

int squareSum(int n1, int n2, int n3)
{
    int sum = 0;
    int result;

    sum = n1 + n2 + n3;
    result = power(sum, 2);

    return result;
}
