//Date: January, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o décimo quinto elemento. A se-  |
|quência de Fibonacci é formada por 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, ...etc, obtendo-se o próxi-|
|mo termo atual com o anterior sucessivamente até o infinito, se a sequência não for interrompida. Utilize para este   |
|exercício as variáveis ATUAL, ANTERIOR e PRÓXIMO.                                                                     |
*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
     
     int i = 0;
     int term1, term2, term3;

     term1 = 0;
     term2 = 1;
     i = 3;

    while (i <= 15) {
        
        term3 = term1 + term2;
        term1 = term2;
        term2 = term3;
        printf("%d\n", term3);
        i++;
    
    }

     return 0;
 }
