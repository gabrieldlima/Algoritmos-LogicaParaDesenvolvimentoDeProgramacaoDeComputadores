//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 10 elementos numéricos inteiros em uma matriz A |
|do tipo vetor. Construir uma matriz B de mesma dimensão com os mesmos elemen- |
|tos da matriz A acrescidos de 2. Colocar os elementos da matriz B em ordem    |
|crescente. Montar um trecho de pesquisa binária para pesquisar os elementos   |
|armazenados na matriz B.                                                      |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10], B[10];
    int temp = 0;
    char answer = 'y';

    // Read 10 whole numbers in array A
    for (int i = 0; i < 10; i++)
    {
        printf("Type a %dº number to array A: ", i + 1);
        scanf("%d", &A[i]);
        B[i] = A[i] + 2;
    }

    //Sort array B in ascending order
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Binary search routine in array B
    while (answer == 'y')
    {
        int start = 1, middle = 0, end = 10, number = 0;
        char find = 'F';

        // User type the number to be searched
        printf("What number do you want to search in array B?\n»»» ");
        scanf("%d", &number);
        

        // Program finds or not the number
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
        
        // Shows whether the number was found
        if (find == 'T')
        {
            printf("Number %d was found in position %d.\n", number, middle);
        }
        else
        {
            printf("Number %d was not found.\n", number);
        }
        middle = find = 0;

        // User chooses to search or not more numbers
        printf("Do you want to search for another number? (Y/n) ");
        scanf(" %c", &answer);
        if (answer == 'Y' || answer == 'y')
        {
            system("clear");
        }
    }

    return 0;
}
