//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B de um dimensão do tipo vetor|
|com 10 elementos reais cada. Construir uma matriz C de mesmo tipo e dimensão  |
|que seja formada pelo produto de cada elemento correspondente às matrizes A e |
|B. Montar um trecho de pesquisa sequencial para pesquisar os elementos exis-  |
|tentes na matriz C.                                                           |
*/

#include <stdio.h>

int main(void)
{
    float A[10], B[10], C[10];
    float number = 0;
    char answer = 'y';

    for (int i = 0; i < 10; i++)
    {
        printf("%dº number for array A: ", i + 1);
        scanf("%f", &A[i]);
        printf("%dº number for array B: ", i + 1);
        scanf("%f", &B[i]);
        printf("\n");
        C[i] = A[i] * B[i];
    }

    while (answer == 'y')
    {
        char found = 'F';

        printf("What number do you want to search in array C: ");
        scanf("%f", &number);

        for (int i = 0; i < 10; i++)
        {
            if (number == C[i])
            {
                found = 'T';
                break;
            }
        }

        if (found == 'T')
        {
            printf("Number %.1f found\n", number);
        }
        else
        {
            printf("Number not found\n", number);
        }

        printf("Do you want to continue? (Y/n) ");
        scanf(" %c", &answer);
    }
    
    return 0;
}
