//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que armazene o nome e altura de 10 pessoas com o uso de  |
|registros. O programa deve usar um menu que execure as seguites etapas:       |
|                                                                              |
|a) Cadastrar os 10 registros.                                                 |
|                                                                              |
|b) Apresentar os registros (nome e altura) das pessoas com 1.5 m ou menores.  |
|                                                                              |
|c) Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m.     |
|                                                                              |
|d) Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m e me-|
|menos de 2.0 m.                                                               |
|                                                                              |
|e) Apresentar todos os registros com a média extraída de todas as alturas ar- |
|mazenadas.                                                                    |
|                                                                              |
|f) Sair do programa.                                                          |
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct 
{
    char name[30];
    float height;

} people[10];

int main(void)
{
    int option;
    float average;
    float sum = 0;
    float *pointer;

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
            printf("-----------------------------------\n");
            printf("1 »»» Register 10 records\n");
            printf("2 »»» Show people <= 1.5m\n");
            printf("3 »»» Show people > 1.5m\n");
            printf("4 »»» Show people > 1.5m and < 2.0m\n");
            printf("5 »»» Show all plus average height\n");
            printf("6 »»» Quit\n");
            printf("-----------------------------------\n");

            printf("Enter a option: ");
            scanf("%d", &option);

            if (option < 1 || option > 6)
            {
                printf("INVALID OPTION! TRY AGAIN.\n");
                sleep(3);
            }
            system("clear");
        }
        while (option < 1 || option > 6);

        
        /*
        --------------------------------------------------------
        Perform a task according to the user's option
        --------------------------------------------------------
        */
        if (option == 6)
            break;

        switch (option)
        {
            case 1: 
                for (int i = 0; i < 10; ++i)
                {
                    printf("%dº PEOPLE\n", i + 1);
                    printf("-----------------------------------\n");
                    
                    printf("Name: ");
                    scanf("%32s", &people[i].name);
                    printf("Height: ");
                    scanf("%f", &people[i].height);
                    
                    pointer = &people[i].height;
                    sum += *pointer;

                    system("clear");
                }
                break;

            case 2:
                for (int i = 0; i < 10; ++i)
                {
                    if (people[i].height <= 1.5)
                    {
                        printf("-----------------------------------\n");
                        printf("Name: %s\n", people[i].name);
                        printf("Height: %.1f\n", people[i].height);
                    }
                }
                sleep(10);
                break;

            case 3:
                for (int i = 0; i < 10; ++i)
                {
                    if (people[i].height > 1.5)
                    {
                        printf("-----------------------------------\n");
                        printf("Name: %s\n", people[i].name);
                        printf("Height: %.1f\n", people[i].height);
                    }
                }
                sleep(10);
                break;

            case 4:
                for (int i = 0; i < 10; ++i)
                {
                    if (people[i].height > 1.5 && people[i].height < 2.0)
                    {
                        printf("-----------------------------------\n");
                        printf("Name: %s\n", people[i].name);
                        printf("Height: %.1f\n", people[i].height);
                    }
                }
                sleep(10);
                break;

            case 5:
                for (int i = 0; i < 10; ++i)
                {
                    printf("\n-----------------------------------\n");
                    printf("Name: %s\n", people[i].name);
                    printf("Height: %.1f\n", people[i].height);
                }
                
                average = sum / 10;

                printf("The average height was: %.1f\n", average);
                sleep(10);
                break;
        }

        system("clear");    
    }

    return 0;
}
