//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler os valores de quatro notas escolares bimestrais de um aluno representados pelas variáveis N1, N2, N3 e N4. Calcu- |
|lar a média aritmética(variável MD1) desse aluno e apresentar a mensagem "Aprovado" se a média for maior ou igual a 7;|
|caso contrário, o programa deve solicitar a quinta nota (nota de exame, representada pela variável NE) do aluno e cal-|
|cular uma nova média aritmética (variável MD2) entre a nota de exame e a primeira média aritmética. Se o valor da nova|
|média for maior ou igual a cinco, apresentar a mensagem "Aprovado em exame"; caso contrário, apresentar a mensagem    |
|"Reprovado". Informar também, após a apresentação das mensagens, o valor da média obtida pelo aluno.                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4, md1, md2, ne;
    
    printf("BOLETIM ESCOLAR BIMESTRAL\n");

    printf("1º nota: ");
    scanf("%f", &n1);
    printf("2º nota: ");
    scanf("%f", &n2);
    printf("3º nota: ");
    scanf("%f", &n3);
    printf("4º nota: ");
    scanf("%f", &n4);

    md1 = (n1 + n2 + n3 + n4) / 4;

    if (md1 >= 7){
        
        printf("APROVADO com média: %f.2f\n", md1);

    }else{

        printf("Nota do exame: ");
        scanf("%f", &ne);

        md2 = (ne + md1) / 2;

        if (md2 >= 5){

            printf("APROVADO EM EXAME com média: %.2f\n", md2);

        }else{

            printf("REPROVADO com média: %.2f!\n", md2);
        }
    }

    return 0;
}
