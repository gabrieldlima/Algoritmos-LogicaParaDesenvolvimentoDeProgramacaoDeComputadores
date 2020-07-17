//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler quatro valores númericos inteiros pelo teclado e apresentar o resultado das adições e das multiplicações utili-   |
|zando o mesmo raciocínio aplicado quando do uso de propriedades distributivas para a máxima combinação possível en-   |
|tre as quatros variáveis. Não é para calcular a propriedade distributiva, apenas para usar a sua forma de combinação. |
|Considerando a leitura de valores para as variáveis A, B, C e D, devem ser feitas seis adições e seis multiplicações, |
|ou seja,deve ser combinada a variável A com a variável B, a variável A com a variável C, a variável A com a variável D|
|Depois é necessário combinar a variável B com a variável C e a variável B com a variável D e, por fim, a variável C   |
|será combinada com a variável D.|
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a, b, c, d, soma1, soma2, soma3, soma4, soma5, soma6, mult1, mult2, mult3, mult4, mult5, mult6;

    printf("Digite 4 números inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);
    printf("4º- ");
    scanf("%i", &d);

    soma1 = a + b;
    soma2 = a + c;
    soma3 = a + d;
    soma4 = b + c;
    soma5 = b + d;
    soma6 = c + d;
    mult1 = a * b;
    mult2 = a * c;
    mult3 = a * d;
    mult4 = b * c;
    mult5 = b * d;
    mult6 = c * d;

    printf("Resultados das combinações:\n"
    "%i + %i = %i\n"
    "%i + %i = %i\n"
    "%i + %i = %i\n"
    "%i + %i = %i\n"
    "%i + %i = %i\n"
    "%i + %i = %i\n"
    "%i * %i = %i\n"
    "%i * %i = %i\n"
    "%i * %i = %i\n"
    "%i * %i = %i\n"
    "%i * %i = %i\n"
    "%i * %i = %i\n",
    a, b, soma1, a, c, soma2, a, d, soma3, b, c, soma4, b, d, soma5, c, d, soma6,
    a, b, mult1, a, c, mult2, a, d, mult3, b, c, mult4, b, d, mult5, c, d, mult6);

    return 0;
}
