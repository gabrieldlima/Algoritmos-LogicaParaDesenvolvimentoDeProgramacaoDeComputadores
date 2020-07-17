//Date: June, 2020
//Author: Gabrielgscript

/*
|Escreva um programa que efetue o gerenciamento dos dados de dez registros de  |
|uma agenda que contenha nomes, endereços e telefones, defina a estrutura de   |
|registro apropriada, o diagrama de blocos e a codificação de um programa que, |
|por meio de uma menu de opções, execute as seguintes etapas:                  |
|                                                                              |
|a) Cadastrar os dez registros.                                                |
|                                                                              |
|b) Pesquisar um registro de cada vez pelo campo nome (pesquisa sequencial).   |
|                                                                              |
|c) Classificar por ordem de nome os registros cadastrados.                    |
|                                                                              |
|d) Apresentar todos os registros.                                             |
|                                                                              |
|e) Sair do programa de cadastro.                                              |
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

struct
{
    char name[32];
    char address[32];
    char phone[32];

} records[10];

int main(void)
{
    int option;
    char name[32];
    char temp[32];

    system("clear");
    while (1)
    {
        /*
        --------------------------------------------------------
        Shows options menu and valid user input
        --------------------------------------------------------
        */
        do
        {
            printf("[1] »»» Register 10 records\n");
            printf("[2] »»» Search records\n");
            printf("[3] »»» Sort by name\n");
            printf("[4] »»» Show all\n");
            printf("[5] »»» Quit\n");
            
            printf("Enter a option: ");
            scanf("%d", &option);

            if (option < 1 || option > 5)
            {
                printf("INVALID OPTION! TRY AGAIN.\n");
                sleep(2);
            }
            system("clear");
        }
        while (option < 1 || option > 5);
        
        /*
        --------------------------------------------------------
        Perform a task according to the user's option
        --------------------------------------------------------
        */ 
        if (option == 5)
            break;

        switch (option)
        {
            case 1:
                for (int i = 0; i < 10; ++i)
                {
                    printf("%dº PEOPLE\n", i + 1);
                    printf("-----------------------------------\n");
                    
                    printf("Name: ");
                    scanf("%32s", &records[i].name);
                    printf("Address: ");
                    scanf("%32s", &records[i].address);
                    printf("Phone: ");
                    scanf("%32s", &records[i].phone);

                    system("clear");
                }
                break;

            case 2:
                printf("Name: ");
                scanf("%32s", &name);

                for (int i = 0; i < 10; ++i)
                {
                    if (records[i].name == name)
                    {
                        printf("Name: %s\n", records[i].name);
                        printf("Address: %s\n", records[i].address);
                        printf("Phone: %s\n", records[i].phone);
                    }
                }
                sleep(10);
                break;

            case 3:
                for (int i = 0; i < 10; ++i)
                {
                    for (int j = i + 1; j < 10; ++j)
                    {
                        if (records[i].name[0] > records[j].name[0])
                        {
                            strcpy(temp, records[i].name);
                            strcpy(records[i].name, records[j].name);
                            strcpy(records[j].name, temp);
                        }
                    }
                }
                printf("Operation performed sucessfully!\n");
                sleep(3);
                break;

            case 4:
                for (int i = 0; i < 10; ++i)
                {
                    printf("\n-----------------------------------\n");
                    printf("Name: %s\n", records[i].name);
                    printf("Address: %s\n", records[i].address);
                    printf("Phone: %s\n", records[i].phone);
                }
                sleep(10);
                break;
        }

        system("clear");
    }

    return 0;
}
