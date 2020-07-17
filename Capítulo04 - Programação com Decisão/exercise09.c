//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler cinco valores numéricos inteiros (variáveis A, B, C, D e E), identificar e apresentar o maior e o menor valor dos |
|valores informados. Não execute a ordenação dos valores como no exercício 6.                                          |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, d, e, menor, maior;

    printf("Digite cinco números inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);
    printf("4º- ");
    scanf("%i", &d);
    printf("5º- ");
    scanf("%i", &e);

    
    //Analizando o menor valor.
    if (a < b && a < c && a < d && a < e || a == b && a == c && a == d && a == e){

        menor = a;

    }

    if (b < a && b < c && b < d && b < e || b == a && b == c && b == d && b == e){
        
        menor = b;

    }

    if (c < a && c < b && c < d && c < e || c == a && c == b && c == d && c == e){

        menor = c;

    }

    if (d < a && d < b && d < c && c < e || d == a && d == b && d == c && d == e){

        menor = d;

    }

    if (e < a && e < b && e < d && e < c || e == a && e == b && e == d && e == c){

        menor = e;

    }

    //Analizando o maior valor.
    if (a > b && a > c && a > d && a > e || a == b && a == c && a == d && a == e){

        maior = a;

    }

    if (b > a && b > c && b > d && b > e || b == a && b == c && b == d && b == e){

        maior = b;

    }

    if (c > a && c > b && c > d && c > e || c == a && c == b && c == d && c == e){

        maior = c;

    }

    if (d > a && d > b && d > c && d > e || d == a && d == b && d == c && d == e){

        maior = d;

    }

    if (e > a && e > b && e > d && e > c || e == a && e == b && e == d && e == c){

        maior = e;

    }

    printf("Dentre os valores digitados o menor valor foi %i e o maior foi %i.\n", menor, maior);

    return 0;
}
