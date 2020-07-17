//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia duas matrizes A e B de uma dimensão com dez ele-|
|mentos. A matriz A deve aceitar apenas a entrada de valores divisíveis por 2 e|
|3, enquanto a matriz B deve aceitar apenas a entrada de valores múltiplos de 5|
| A entrada das matrizes deve ser validada pelo programa e não pelo usuário.   |
|Construir uma matriz C que seja a junção das matrizes A e B, de modo que con- |
|tenha 20 elementos. Apresentar os valores da matriz C.                        |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10], B[10], C[20];

    for (int i = 0; i < 20; i++)
    {
        int n = 0;

        if (i < 10)
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
            printf("%iº número múltiplo de 5 na matriz B: ", i - 9);
            scanf("%i", &n);

            while (n % 5 != 0)
            {
                printf("%i não é múltiplo de 5. Tente novamente: ", n);
                scanf("%i", &n);
            }

            B[i - 9] = n;
        }   
    }

    for (int j = 0; j < 20; j++)
    {
        if (j < 10)
        {
            C[j] = A[j];
        }
        else
        {
            C[j] = B[j - 8];
        }
        printf("C[%i] »»» %i\n", j, C[j]);
    }
}
