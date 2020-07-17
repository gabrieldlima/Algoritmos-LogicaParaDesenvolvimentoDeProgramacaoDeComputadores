//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e|
|sete colunas. Ao final apresentar o total de elementos pares existentes na ma-|
|triz                                                                          |
*/

#include <stdio.h>

int main(void)
{
    int A[7][7];
    int count = 0;

    // Input
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("Enter a integer for arary A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            
            if (A[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }

    // Output
    printf("\nArray A has %d even numbers.\n", count);
    
    return 0;
}
