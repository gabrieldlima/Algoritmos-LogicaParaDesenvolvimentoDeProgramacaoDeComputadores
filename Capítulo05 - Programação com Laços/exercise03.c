//Date: January, 2020
//Author: Gabrielgscript;

/*
|Contruir um programa que apresente a soma dos cem primeiros números naturais(1+2+3...+98+99+100).                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1, sum = 0;
    

    while (i <= 100) {
        
        sum += i;
        i++;
    
    }
    
    printf("%d\n", sum);

    return 0;
}
