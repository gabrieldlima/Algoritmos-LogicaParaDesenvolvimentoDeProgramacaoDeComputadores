//Date: January, 2020
//Author: Gabrielgscript;

/*
|Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas pelas variáveis N1, N2, |
|N3 e N4. Calcular a média aritmética (variável MD) desse aluno e apresentar a mensagem "Aprovado" se a média for maior|
|ou igual a 5; caso contrário apresentar a mensagem "Reprovado". Informar também, após a apresentação das mensagens, o |
|valor da média obtida pelo aluno.                                                                                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4, md;

    printf("BOLETIM ESCOLAR BIMESTRAL\n");

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    md = (n1 + n2 + n3 + n4) / 4;

    if (md >= 5){

        printf("APROVADO com média: %.2f\n", md);

    }else{

        printf("REPROVADO com média: %f.2f\n", md);

    }

    return 0;

}
