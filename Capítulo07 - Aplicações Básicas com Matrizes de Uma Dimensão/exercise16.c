//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma matriz A com dez elementos do tipo caracter.|
|Construir uma matriz B de mesma dimensão e tipo que a matriz A. O último ele- |
|mento da matriz A deve ser o primeiro elemento da matriz B, o penúltimo ele-  |
|mento da matriz A deve ser o segundo elemento da matriz B até que o primeiro  |
|elemento da matriz A seja o último elemento da matriz B. Apresentar os elemen-|
|tos da matriz B em ordem descendente.										   |
*/

#include <stdio.h>

int main(void)
{
	char A[10], B[10];
	char temp[1];

	// Input
	for (int i = 0; i < 10; i++)
	{
		printf("Letter %i for array A: ", i + 1);
		scanf(" %c", &A[i]);
	}

	// Processing
	for (int i = 0; i < 10; i++)
	{
		B[i] = A[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; i < 10; i++)
		{
			if (B[i] > B[j])
			{
				temp[0] = B[i];
				B[i] = B[j];
				B[j] = temp[0];
			}
		}
	}
	
	//Output
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", B[i]);
	}

	printf("\n");

	return 0;
}
