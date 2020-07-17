//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia quinze valores numéricos inteiros e no final apresente o somatório da fatorial de cada  |
|valor lido.                                                                                                           |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1, num2 = 0;
    double num = 0, soma = 0, fatorial = 1;

    while (i <= 15) {

        printf("Digite o %dº número inteiro: ", i);
        scanf("%lf", &num);
        num2 = num;
        
        while (num2 >= 1) {

            fatorial *= num2;
            num2--;

        }

        printf("%.0lf! = %.0lf\n", num, fatorial);
        soma += fatorial;
        fatorial = (fatorial - fatorial) + 1;
        i++;

    }
    
    printf("A soma do fatorial de todos os números digitados é de %.0lf.\n", soma);

    return 0;
}
