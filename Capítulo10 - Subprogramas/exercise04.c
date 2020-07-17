//Date: June, 2020
//Author: Gabrielgscript

/*
|Desenvolver um algoritmo de programa de computador que calcule e apresente o  |
|valor de uma potência inteira de um número qualquer elevado a um expoente     |
|qualquer. Ao informar para a sub-rotina o número da base e do expoente, deve  |
|apresentar o seu resultado da potência. Por exemplo, se for usado no programa |
|principal o procedimento POTÊNCIA(2, 3), deve ser apresentado o valor de 8.   |
|Resolva a exponenciação com o uso de laço. Não use operador de exponenciação. |
*/

#include <stdio.h>

int power(int, int);

int main(void)
{
    int n1;
    int n2;

    while (1)
    {
         printf("Base: ");
        scanf("%d", &n1);
        printf("Exponent: ");
        scanf("%d", &n2);

        printf("Power: %d\n", power(n1, n2));
    }
    
    return 0;
}

int power(int base, int exponent)
{
    int pow;
    int x, temp;

    for (int i = 1; i < exponent; ++i)
    {
        if (i == 1)
            x = base * base;

        temp = x;

        if (i > 1)
        {
            x = temp * base;
        }
    }

    pow = x;

    return pow;
}
