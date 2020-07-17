//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia oito elementos inteiros em uma matriz A de uma  |
|dimensão do tipo vetor. Construir uma matriz B de mesma dimensão e tipo com os|
|elementos da matriz A multiplicados por 5. Montar uma rotina de pesquisa biná-|
|ria, para pesquisar os elementos armazenados na matriz B.                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[8], B[8];
    int num = 0, temp = 0;
    char answer= 'y';

    for (int i = 0; i < 8; i++)
    {
        printf("%dº number for array A: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] * 5;
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    while (answer == 'y')
    {
        int start = 1, middle = 0, end = 8, number = 0;
        char find = 'F';

        printf("What number do want to search in array B: ");
        scanf("%d", &number);

        while (start <= end && find == 'F')
        {
            middle = (start + end) / 2;

            if (number == B[middle])
            {
                find = 'T';
            }
            else
            {
                if (number < B[middle])
                {
                    end = middle - 1;
                }
                else
                {
                    start = middle + 1;
                }
            }
        }
        
        if (find == 'T')
        {
            printf("Number %d found in position %d.\n", number, middle);
        }
        else
        {
            printf("Number %d not found.\n", number);
        }

        printf("Do you want to search for another number? (Y/n) ");
        scanf(" %c", &answer);
    }

    return 0;
}
