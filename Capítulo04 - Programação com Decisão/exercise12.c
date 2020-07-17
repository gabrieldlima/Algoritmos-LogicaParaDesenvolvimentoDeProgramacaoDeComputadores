//Date: January, 2020
//Author: Gabrielgscript;

/*
|Fazer a leitura de um valor númerico inteiro qualquer e apresentá-lo caso não seja maior que 3. Dica: para a solução  |
|deste problema utilize apenas o operador lógico de negação.                                                           |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    
    printf("Digite um valor numérico inteiro qualquer: ");
    scanf("%i", &num);

    if (!(num > 3)){

        printf("Você digitou o número %i.\n", num);

    }

    return 0;
}
