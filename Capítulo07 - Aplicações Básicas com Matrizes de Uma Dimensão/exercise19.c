//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia dez elementos numéricos reis em uma matriz A do |
|tipo vetor e apresente esses elementos por meio de pesquisa sequencial.	   |
*/

#include <stdio.h>

int main(void)
{
	float A[10];

	for (int i = 0; i < 10; i++)
	{
		printf("Enter a %iº integer: ", i + 1);
		scanf("%f", &A[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%.1f ", A[i]);
	}

	printf("\n");

	return 0;
}
