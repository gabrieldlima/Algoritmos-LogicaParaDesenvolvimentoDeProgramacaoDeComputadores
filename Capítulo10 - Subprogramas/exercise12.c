//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que apresente a mensagem "Este valor não é |
|divisível por 2 e 3". Deve ser solicitado pelo programa principal o valor a   |
|ser verificado. Caso o valor não atenda à condição desejada, a sub-rotina deve|
|apresentar a mensagem "Valor inválido".                                       |
*/

#include <stdio.h>

void isDivisible(int);

int main(void)
{
    int number;

    printf("Enter a integer: ");
    scanf("%d", &number);

    isDivisible(number);

    return 0;
}

void isDivisible(int num)
{
    if (num % 2 == 0 && num % 3 == 0)
        printf("This value is divisible by 2 and 3.\n");
    else
        printf("Invalid value!\n");
}
