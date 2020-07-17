//Date: January, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que possibilite calcular a área total em metros de uma residência com os cômodos sala, cozinha,  |
|banheiro, dois quartos, área de serviço, quintal, garagem, entre outros, que podem ser fornecidos ao programa. O pro- |
|grama deve solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo. Em seguida, deve apre-  |
|sentar a área do cômodo lido e também um mensagem solicitando ao usuário a confirmação de continuar calculando novos  |
|cômodos. Caso o usuário responda "NÃO", o programa deve apresentar o valor total acumulado da área resindecial.       |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    char resp = 'S';
    double largura = 0, comprimento = 0, areaComodo = 0, areaResidencia = 0;

    printf("========== ÁREA TOTAL DE UMA RESIDÊNCIA ==========\n");

    while (resp == 'S' || resp == 's') {

        printf("-%dº Cômodo\n", i);
        printf("Largura: ");
        scanf("%lf", &largura);
        printf("Comprimento: ");
        scanf("%lf", &comprimento);
        
        areaComodo = largura * comprimento;
        areaResidencia += areaComodo;
        printf("Área do Cômodo: %.2lfm²\n", areaComodo);

        printf("Deseja calcular novos cômodos[S/N]? ");
        scanf(" %c", &resp);
        printf("\n");
        i++;

    }

    printf("Área Residencial Total: %.2lfm²\n", areaResidencia);

    return 0;
}
