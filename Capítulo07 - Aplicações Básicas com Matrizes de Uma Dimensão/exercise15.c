//Date: March, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia 15 elementos do tipo inteiro em uma matriz A e  |
|apresentar os elementos da matriz utilizando a pesquisa binária.              |
*/

#include <stdio.h>

int main(void)
{
	int A[15];
	int temp;

	for (int i = 0; i < 15; i++)
	{
		printf("%i number for array A: ", i + 1);
		scanf("%i", &A[i]);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = i + 1; j < 15; j++)
		{
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	for (int i = 0; i < 15; i++)
	{
		printf("%i\n", A[i]);
	}

	return 0;
}
