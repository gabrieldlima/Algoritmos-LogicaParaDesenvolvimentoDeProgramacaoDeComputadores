//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que leia o nome e sexo de um índividuo. Por|
|meio de um subrotina o programa deve apresentar a mensagem "llmo. Sr.", caso o|
|sexo seja masculino, e "llma. Sra.", caso o sexo seja feminino. Apresentar ju-|
|nto com cada mensagem o nome do indivíduo.                                    |
*/

#include <stdio.h>

void msg(char, char[]);

int main(void)
{
    char name[32];
    char sex;

    printf("Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Sex [M/F]: ");
    scanf(" %c", &sex);

    msg(sex, name);

    return 0;
}

void msg(char sex, char name[])
{
    if (sex == 'M' || sex == 'm')
        printf("llmo Sr. %s", name);
    else if (sex == 'F' || sex == 'f')
        printf("llma Sra. %s", name);
}
