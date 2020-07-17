//Data: January, 2020
//Author: Gabrielgscript;

/*
|Ler três valores inteiros respresentados pelas variáveis A, B e C e apresentar os valores lidos dispostos em ordem    |
|crescente. Dica: utilizar tomada de decisão sequencial e as ideias trabalhadas nos exercícios  7(propriedade distribu-|
|tiva) e 6(troca de valores) do capítulo 3.                                                                            |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, menor, meio, maior;

    printf("Digite três números inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);
    
    //Analizando o menor valor.
    if (a < b && a < c || a == b && a == c){

        menor = a;

    }

    if (b < a && b < c || b == a && b == c){
        
        menor = b;

    }

    if (c < a && c < b || c == a && c == b){

        menor = c;

    }

    //Analizando o maior valor.
    if (a > b && a > c || a == b && a == c){

        maior = a;

    }

    if (b > a && b > c || b == a && b == c){

        maior = b;

    }

    if (c > a && c > b || c == a && c == b){

        maior = c;

    }

    //Analizando o meio valor.
    if (a > menor && a < maior || a == b && a == c){
        
        meio = a;
    
    }

    if (b > menor &&  b < maior || b == a && b == c){

        meio = b;

    }

    if (c > menor && c < maior || c == a && c == b){

        meio = c;

    }

    printf("Segue os valores digitados em ordem crescente:\n%i >>> %i >>> %i\n", menor, meio, maior);

    return 0;
}
