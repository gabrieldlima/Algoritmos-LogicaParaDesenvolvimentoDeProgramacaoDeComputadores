//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que efetue a leitura de dades em duas matrizes A e B de  |
|uma dimensão do tipo vetor, sendo a matriz A com dez elementos e a matriz B   |
|com cinco elementos. Os elementos a serem armazenados nas matrizes devem ser  |
|do tipo caractere. Construir uma matriz C com a capacidade de armazenar um to-|
|tal de 15 elementos e executar a junção das matrizes A e B na matriz C. Apre- |
|sentar os dados da matriz C em ordem descendente						       |
*/

#include <stdio.h>

int main(void)
{
	char A[10], B[10], C[20];
	char temp[1];

	// Input
	for (int i = 0; i < 10; i++)
	{
		printf("Letter %i for array A: ", i + 1);
		scanf(" %c", &A[i]);
		printf("Letter %i for array B: ", i + 1);
		scanf(" %c", &B[i]);
		printf("\n");
	}

	// Processing
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			C[i] = A[i];
		}
		else
		{
			C[i] = B[i - 10];
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (C[i] > C[j])
			{
				temp[0] = C[i];
				C[i] = C[j];
				C[j] = temp[0];
			}
		}
	}

	// Output
	for (int i = 0; i < 20; i++)
	{
		printf("%c ", C[i]);
	}

	printf("\n");

	return 0;
}
