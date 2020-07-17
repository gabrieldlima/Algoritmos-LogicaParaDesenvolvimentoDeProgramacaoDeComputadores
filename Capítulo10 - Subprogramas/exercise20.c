//Date: June, 2020
//Author: Gabrielgscript

/*
|Desenvolver um programa que calcule e apresente o valor de uma potência de um |
|número qualquer. Ou seja, ao informar para a sub-rotina o número e sua potên- |
|cia, deve ser apresentado o seu resultado. Por exemplo, se for mecionada no   |
|programa principal a sub-rotina POTÊNCIA(2, 3) deve ser apresentado o valor 8.|
*/

#include <stdio.h>

int power(int, int);

int main(void)
{
    int n1;
    int n2;

    while (1)
    {
         printf("Base: ");
        scanf("%d", &n1);
        printf("Exponent: ");
        scanf("%d", &n2);

        printf("Power: %d\n", power(n1, n2));
    }
    
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
