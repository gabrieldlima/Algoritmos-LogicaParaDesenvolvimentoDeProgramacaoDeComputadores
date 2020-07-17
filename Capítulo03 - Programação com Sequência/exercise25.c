//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia um valor númerico inteiro e apresente como resultado os seus valores sucessor e ante-|
|cessor.                                                                                                             |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int numero, sucessor, antecessor;

    printf("Digite um número qualquer: ");
    scanf("%i", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Analizando o número %i, seu antecessor é %i e seu sucessor é %i.\n", numero, antecessor, sucessor);
    
    return 0;
}
