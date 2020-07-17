//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de valor numérico inteiro que esteja na faixa de valores de 1 até 9. O programa deve apresentar a   |
|mensagem "O valor está na faixa permitida", caso o valor informado esteja entre 1 e 9. Se o valor estiver fora da fai-|
|xa, o programa deve apresentar a mensagem "O valor está fora da faixa permitida".                                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;

    printf("Digite um número inteiro entre 0 e 9: ");
    scanf("%i", &num);

    if (num >= 0 && num <= 9){

        printf("O valor está na faixa permitida.\n");

    }else{

        printf("O valor está fora da faixa permitida.\n");

    }
    
    return 0;
}
