//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de um valor númerico inteiro e apresentar o resultado do valor lido elevado ao quadrado.|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int numero, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    quadrado = pow(numero, 2);

    printf("O número %i elevado ao quadrado é igual a %i.\n", numero, quadrado);
    
    return 0;
}
