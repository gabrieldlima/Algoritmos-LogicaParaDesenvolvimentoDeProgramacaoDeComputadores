//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que calcule a série de Fibonacci de N ter- |
|mos. A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21,  |
|34, ..., etc, a qual se caracteriza pela soma de um termo posterior com o seu |
|anterior subsequente. Apresentar o resultado.                                 |
*/

#include <stdio.h>

void fibonacci(int);

int main(void)
{
    int terms;

    printf("=-=-=-=-=-=-= Fibonacci sequence =-=-=-=-=-=-=\n");
    printf("How many terms: ");
    scanf("%d", &terms);

    if (terms == 0)
        printf("0\n");
    else if (terms == 1)
        printf("1\n");
    else   
        fibonacci(terms);

    return 0;
}

void fibonacci(int terms)
{
    int term1 = 1;
    int term2 = 1;
    int term3;

    printf("%d %d ", term1, term2);

    for (int i = 0; i < (terms - 2); ++i)
    {
        term3 = term1 + term2;
        term1 = term2;
        term2 = term3;
        
        printf("%d ", term3);

    }

    printf("\n");
}
