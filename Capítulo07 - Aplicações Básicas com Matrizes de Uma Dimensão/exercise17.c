//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elabora um programa que leia dez elementos do tipo inteiro em uma matriz A e  |
|apresentá-los utilizando pesquisa binária.									   |
*/


#include <stdio.h>

int main(void)
{
	int A[10];
	int temp;

	for (int i = 0; i < 10; i++)
	{
		printf("%i number for array A: ", i + 1);
		scanf("%i", &A[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (A[i] > A[j])
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%i\n", A[i]);
	}

	return 0;
}
