//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia três matrizes A, B e C de uma dimensão do tipo  |
|vetor com 5 elementos inteiros cada. Construir uma matriz D de mesmo tipo e   |
|dimensão que seja formada pela soma dos elementos correspondentes às matrizes |
|A, B e C. Montar o trecho de pesquisa binária para pesquisar os elementos na  |
|matriz D.                                                                     |
*/

#include <stdio.h>

int main(void)
{
    int A[5], B[5], C[5], D[5];
    int temp = 0;
    char answer = 'y';

    for (int i = 0; i < 5; i++)
    {
        printf("Type a %dº number for array A: ", i + 1);
        scanf("%d", &A[i]);
        printf("Type a %dº number for array B: ", i + 1);
        scanf("%d", &B[i]);
        printf("Type a %dº number for array C: ", i + 1);
        scanf("%d", &C[i]);
        printf("\n");
        D[i] = A[i] + B[i] + C[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (D[i] > D[j])
            {
                temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }

    while (answer != 'n')
    {
        int start = 1, middle = 0, end = 5, number = 0;
        char found = 'F';
        
        printf("What number do you want to search in array D? ");
        scanf("%d", &number);
        
        while (start <= end && found == 'F')
        {
            middle = (start + end) / 2;

            if (number == D[middle])
            {
                found = 'T';
            }
            else
            {
                if (number < D[middle])
                {
                    end = middle - 1;
                }
                else
                {
                    start = middle + 1;
                }
            }   
        }
        
        if (found == 'T')
        {
            printf("Number %d found in position %d.\n", number, middle);
        }
        else
        {
            printf("Number %d not found.\n", number);
        }
        
        printf("Do you want to search for more numbers? (Y/n) ");
        scanf(" %c", &answer);
    }

    return 0;
}
