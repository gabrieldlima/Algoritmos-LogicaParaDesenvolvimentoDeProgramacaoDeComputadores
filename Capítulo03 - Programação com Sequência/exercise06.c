//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a variável A passe a possuir o   | 
|valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores após a efetivação do |
|processamento da troca.                                                                                              |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a, b, auxiliar;

    printf("Digite um número para variável A: ");
    scanf("%i", &a);
    printf("Digite um número para variável B: ");
    scanf("%i", &b);

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Variável A é igual a: %i\n"
    "Variábel B igual a: %i\n", a, b);

    return 0;
}
