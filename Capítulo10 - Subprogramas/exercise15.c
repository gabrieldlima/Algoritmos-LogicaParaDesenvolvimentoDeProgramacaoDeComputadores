//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que apresente o resultado do valor de uma  |
|fatorial de um número qualquer.                                               |
*/

#include <stdio.h>

int fac(int);

int main(void)
{
    int num;

    printf("Enter a integer: ");
    scanf("%d", &num);
    
    printf("%d! = %d\n", num, fac(num));

    return 0;
}

int fac(int num)
{
    int result = 1;

    for (int i = 1; i <= num; ++i)
        result *= i;

    return result;
}
