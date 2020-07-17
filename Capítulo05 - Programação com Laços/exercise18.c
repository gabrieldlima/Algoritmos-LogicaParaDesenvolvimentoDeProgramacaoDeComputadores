//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia valores positivos inteiros até que um valor negativo seja informado. Ao final devem ser |
|apresentados o maior e o menor dos valores informados pelo usuário.                                                   |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = 0, count = 1;
    int maior = 0, menor = 0;

    while (num >= 0) {

        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if (count == 1) {

            maior = num;
            menor = num;

        } else {

            if (num > maior) {

                maior = num;

            } else if (num >= 0 && num < menor) {

                menor = num;

            }

        }

        count++;

    }

    printf("O maior número digitado foi o %d\n", maior);
    printf("O menor número digitado foi o %d\n", menor);
    
    return 0;
}
