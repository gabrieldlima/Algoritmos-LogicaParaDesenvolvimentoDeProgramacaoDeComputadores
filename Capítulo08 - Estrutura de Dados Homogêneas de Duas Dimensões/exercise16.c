//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e |
|e sete colunas. Ao final apresentar o total de elementos pares e ímpares exis-|
|tentes na matriz. Apresentar também o percentual de elementos pares e ímpares |
|em relação ao total de elementos da matriz. Supondo a existência de 20 elemen-|
|tos pares e 50 elementos ímpares, ter-sei-ia 28,6% de elementos pares e 71,4% |
|de elementos ímpares.                                                         |
*/

#include <stdio.h>

int main(void)
{
    int A[10][7];
    
    int totalNumbers = 0;
    int totalEven = 0;
    int totalOdd = 0;

    float evenPercentage;
    float oddPercentage;

    // Input 
    for (int rows = 0; rows < 10; rows++)
    {
        for (int columns = 0; columns < 7; columns++)
        {
            printf("A[%d][%d]: ", rows, columns);
            scanf("%d", &A[rows][columns]);

            totalNumbers++;

            if (A[rows][columns] % 2 == 0)
            {
                totalEven++;
            }
            else
            {
                totalOdd++;
            }
        }
    }

    // Processing
    evenPercentage = (totalEven * 100) / (float)totalNumbers;
    oddPercentage = (totalOdd * 100) / (float)totalNumbers;

    // Output
    printf("\nStatistics of the numbers entered:\n");
    printf("Total even numbers: %d\n", totalEven);
    printf("Total odd numbers: %d\n", totalOdd);
    printf("\n");
    printf("Percentage of even numbers: %.1f\n", evenPercentage);
    printf("Percentage of odd numbers: %.1f\n", oddPercentage);

    return 0;
}
