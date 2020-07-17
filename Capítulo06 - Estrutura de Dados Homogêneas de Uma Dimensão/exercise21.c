//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B de uma dimensão com 12 ele- |
|mentos. A matriz A deve aceitar apenas a entrada de valores divisíveis por 2 e|
|3, enquanto a matriz B deve aceitar apenas a entrada de valores que não sejam |
|múltiplos de 5. A entrada das matrizes deve se validada pelo programa e não   |
|pelo usuário. Construir uma matriz C que seja o resultado da junção das matri-|
|zes A e B, de forma que contenha 24 elementos. Apresentar os elementos da ma- |
|triz C.                                                                       |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[12], B[12], C[24];

    for (int i = 0; i < 24; i++)
    {
        int n = 0;

        if (i < 12)
        {
            printf("%iº número divisível por 2 e 3 na matriz A: ", i + 1);
            scanf("%i", &n);

            while (n % 2 != 0 && n % 3 != 0)
            {
                printf("%i não é divisível por 2 e 3. Tente novamente: ", n);
                scanf("%i", &n);
            }

            A[i] = n;
        }
        else
        {
            printf("%iº número NÃO múltiplo de 5 na matriz B: ", i - 11);
            scanf("%i", &n);

            while (n % 5 == 0)
            {
                printf("%i é múltiplo de 5. Tente novamente: ", n);
                scanf("%i", &n);
            }

            B[i - 11] = n;
        }   
    }

    for (int j = 0; j < 24; j++)
    {
        if (j < 12)
        {
            C[j] = A[j];
        }
        else
        {
            C[j] = B[j - 11];
        }
        printf("C[%i] »»» %i\n", j, C[j]);
    }
}
