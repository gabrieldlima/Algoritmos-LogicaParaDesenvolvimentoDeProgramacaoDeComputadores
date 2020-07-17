//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 12 elementos numéricos inteiros em uma matriz do|
|tipo vetor. Coloque-os em ordem descrescente e apresente os elementos ordena- |
|dos.                                                                          |
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int num[12];
    int temp = 0;

    // User type 12 numbers for array num[]
    for (int r = 0; r < 12; r++)
    {
        printf("Type a %iº number: ", r);
        scanf("%i", &num[r]);
    }

    // Short elements in descending order
    for (int i = 0; i <= 12; i++)
    {
        for (int j = i + 1; j <= 12; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    
    // Show the elements of num[] array
    for (int k = 0; k < 12; k++)
    {
        printf("%i\n", num[k]);
    }

    return 0;
}
