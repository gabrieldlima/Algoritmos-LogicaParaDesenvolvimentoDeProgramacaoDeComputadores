//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que apresente a mensagem "Este valor é di- |
|visível por 2 e 3". Deve ser solicitado pelo programa principal o valor a ser |
|verificado. Caso o valor não atenda à condição desejada, a sub-rotina deve a- |
|presentar a mensagem "Valor inválido".                                        |
*/

#include <stdio.h>

void isDivisible(int);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    isDivisible(number);

    return 0;
}

void isDivisible(int num)
{
    if (num % 2 == 0 && num % 3 == 0)
        printf("Invalid value!\n");
    else
        printf("This value is not divisible by 2 and 3.\n");
}
