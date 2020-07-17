//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 30 elementos numéricos reais em uma matriz A do |
|tipo vetor. Construir uma matriz B de mesmo tipo, observando a seguinte lei de|
|formação: todo elemento da matriz B deve ser o cubo do elemento correspondente|
|da matriz A. Montar o trecho de pesquisa sequencial para pesquisar os elemen- |
|mentos armazenados na matriz B.                                               |
*/

#include <stdio.h>

double power(double num);

int main(void)
{
    double A[30], B[30];
    double number = 0;
    char answer = 'y';

    // Read 30 float numbers for the array A
    for (int i = 0; i < 30; i++)
    {
        printf("Type a %iº float numbers for array A: ", i + 1);
        scanf("%lf", &A[i]);
    }

    // Read 30 powers of array A in array B
    for (int i = 0; i < 30; i++)
    {
        B[i] = power(A[i]);
    }

    // Sequential search routine
    while (answer != 'n')
    {
        // Ask the number the user wants to find
        printf("\n");
        printf("What number do you want to search in matriz B: ");
        scanf("%lf", &number);

        // Checks whether the numbers was found or not
        for (int s = 0; s < 30; s++)
        {
            if (B[s] == number)
            {
                printf("Number %.1lf found in position %i.\n", number, s);
            }
        }
        
        // Ask the user if he wants to continue
        printf("Do you want to search for more numbers? [y/n] ");
        scanf(" %c", &answer);
    }

    return 0;
}

double power(double num)
{
    int i = 1;
    double pow = 1, exponent = 3;

    while (i <= exponent)
    {
        pow *= num;
        i++;
    }

    return pow;
}
