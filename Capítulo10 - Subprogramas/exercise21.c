//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia três valores (A, B e C) e apresente como resul- |
|tado final a soma dos quadrados dos três valores lidos.                       |
*/

#include <stdio.h>
#include <math.h>

double sumSquare(int n1, int n2, int n3);

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

    printf("The sum of the squares of the three values is: %.0lf\n", 
    sumSquare(A, B, C));

    return 0;
}

double sumSquare(int n1, int n2, int n3)
{
    double result;

    for (int i = 1; i <= 3; ++i)
    {
        if (i == 1)
            result += pow(n1, 2);
        else if (i == 2)
            result += pow(n2, 2);
        else
            result += pow(n3, 2);
    }

    return result;
}
