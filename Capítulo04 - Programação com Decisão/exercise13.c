//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de um nome (variável NOME) e o sexo(variável SEXO) de um pessoa e apresentar como saída umas das se-|
|guintes mensagens: "llmo. Sr", caso seja informado masculino (utilizar como valor o caractere "M"), ou "llma. Sra",   |
|caso seja informado o sexo feminino (utilizar como valor o caractere "F"). Após a mensagem de saudação, apresentar o  |
|nome informado. O programa deve, após a entrada do sexo, verificar primeiramente se o sexo fornecido é realmente váli-|
|do, ou seja, se é igual a "M" ou "F". Não sendo essa condição verdadeira, o programa deve apresentar a mensagem "Sexo |
|"Inválido".|
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[50];
    char sexo;

    printf("Qual o seu nome: ");
    gets(nome);
    printf("Qual o seu sexo[M/F]: ");
    scanf("%c", &sexo);

    //Verificar se o sexo digitado é válido.
    if (!(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f')){

        printf("Sexo Inválido!\n");

    }else{

        if (sexo == 'M' || sexo == 'm'){

            printf("llmo. Sr. %s! Seu sexo é masculino.\n", nome);

        }else{

            printf("llma. Sra. %s! Seu sexo é feminino.\n", nome);

        }

    }

    return 0;
}
