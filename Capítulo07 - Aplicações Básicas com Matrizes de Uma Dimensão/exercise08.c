//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia 20 elementos numéricos inteiros negativos em uma|
|matriz A do tipo vetor. Construir uma matriz B de mesmo tipo e dimensão,em que|
|cada elemento deve ser o valor positivo do elemento correspondente da matriz A|
|Desta forma, se em A[1] estiver armazenado o elemento -3, deve estar em B[1] o|
|valor 3, e assim por diante. Apresentar os elementos da matriz B em ordem de- |
|crescente.                                                                    |
*/

#include <stdio.h>

int main(void)
{
    int A[20], B[20];
    int temp = 0, iterator = 0;

    // Read 20 negative numbers for array A
    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("Type a %iº negative number for array A: ", i + 1);
            scanf("%i", &A[i]);

            if (A[i] >= 0)
            {
                printf("INVALID! Enter only negative numbers.\n");
            }
        }
        while (A[i] >= 0);
        printf("\n");
    }

    // Read 20 numbers from array A to array B with inverted sign
    for (int i = 0; i < 20; i++)
    {
        B[i] = A[i] * (-1);
    }

    // Sort the numbers in array B in descending order
    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (B[i] < B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Display the values of array B on the screen
    printf("Array B in descending order: \n");
    while (iterator < 20)
    {
        printf("%i\n", B[iterator]);
        iterator++;
    }
    
    return 0;
}
