//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D. Apresentar apenas   |
|os valores que sejam divísiveis por 2 ou 3.                                                                           |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, d;

    printf("Digite quatro números inteiros quaiquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);
    printf("4º- ");
    scanf("%i", &d);

    printf("Segue abaixo valores que são divisiveis por 2 ou 3:\n");

    if (a % 2 == 0 || a % 3 == 0){
            
        printf(">>> %i\n", a);
    
    }

    if (b % 2 == 0 || b % 3 == 0){

        printf(">>> %i\n", b);

    }

    if (c % 2 == 0 || c % 3 == 0){

        printf(">>> %i\n", c);
    }

    if (d % 2 == 0 || d % 3 == 0){

        printf(">>> %i\n", d);
   
    }

    if (a % 2 != 0 && a % 3 != 0 && b % 2 != 0 && b % 3 != 0 && c % 2 != 0 && c % 3 != 0 && d % 2 != 0 && d % 3 != 0){
    
        printf(">>> Nenhum valor digitado é divisivel por 2 ou 3.\n");

    }
    
    return 0;
}
