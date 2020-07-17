//Date: January, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que calcule e apresente o somatório dos números de grãos de trigo que se pode obter num tabuleiro|
|de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro quadro e nos quadros seguintes o dobro do|
|quadro anterior. Ou seja, no primeiro quadro coloca-se um grão, segundo quadro colocam-se dois grãos (neste momento,  |
|tem-se três grâos), terceiro quadro colocam-se quatro grãos(tendo neste momento sete grãos), no quarto quadro colocam-|
|se oito grãos (tendo-se então quize grãos) até atingir o sexagésimo quarto quadro (este exercício foi baseado numa si-|
|tuação exposta no capítulo 16 do livro "O Homem que Calculava" de Malba Tahan, de Editora Record).                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 2;
    double anterior = 1, proximo = 0, soma = 1;

    while (i <= 64) {

        proximo = anterior * 2;
        anterior = proximo;
        printf("%d >>> %lf\n", i, proximo);
        soma += proximo;
        i++;

    }
    
    printf("Em um tabuleiro de xadrez cabem %.0lf trigos.\n", soma);

    return 0;
}
