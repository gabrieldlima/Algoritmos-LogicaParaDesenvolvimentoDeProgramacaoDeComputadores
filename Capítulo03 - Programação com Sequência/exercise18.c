//Date: January, 2020
//Author: Gabrielgscript;

/*
|Em uma eleição sindical concorreram ao cargo de presidente três candidatos (representados pelas variáveis A, B e C).  |
|Durante a apuração dos votos foram computados votos nulos e em branco, além dos votos válidos para cada candidato. De-|
|ve ser criado um programa de computador que faça a leitura da quantidade de votos válidos para cada candidato, além   |
|também de ler a quantidade de votos nulo e em branco. Ao final o programa deve apresentar o número total de eleitores,|
|considerando votos válidos, nulos e em branco; o percentual correspondente de votos válidos em relação à quantidade de|
|eleitores; o percentual correpondente de votos válidos do candidato A em relação à quantidade de eleitores; o percen- |
|tual correspondente de votos válidos do candidato B em relação à quantidade de eleitores; o percentual corresponden-  |
|te de votos válidos do candidato C em relação à quantidade de eleitores; o percentual correspondente de votos nulos em|
|relação à quantidade de eleitores; e por último o percentual correspondente de votos em branco em relação à quantidade|
|de eleitores.                                                                                                         |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int votosA, votosB, votosC, votosNulo, votosBranco, totalEleitores;
    float validosPercentual, aPercentual, bPercentual, cPercentual, nuloPercentual, brancoPercentual;

    printf("===== ELEIÇÃO SINDICAL =====\n");

    printf("Votos do Candidato A: ");
    scanf("%i", &votosA);
    printf("Votos do Candidato B: ");
    scanf("%i", &votosB);
    printf("Votos do Candidato C: ");
    scanf("%i", &votosC);
    printf("Votos Nulos: ");
    scanf("%i", &votosNulo);
    printf("Votos Branco: ");
    scanf("%i", &votosBranco);

    totalEleitores = votosA + votosB + votosC + votosNulo + votosBranco;
    validosPercentual = ((votosA + votosB + votosC) * 100) / totalEleitores;
    aPercentual = (votosA * 100) / totalEleitores;
    bPercentual = (votosB * 100) / totalEleitores;
    cPercentual = (votosC * 100) / totalEleitores;
    nuloPercentual = (votosNulo * 100) / totalEleitores;
    brancoPercentual = (votosBranco * 100) / totalEleitores;

    printf("\nAnalizando os votos da eleição temos que:\n");
    printf("Total de Eleitores: %i\n", totalEleitores);
    printf("Votos Válidos: %.2f%%\n", validosPercentual);
    printf("Candidato A: %.2f%%\n", aPercentual);
    printf("Candidato B: %.2f%%\n", bPercentual);
    printf("Candidato C: %.2f%%\n", cPercentual);
    printf("Nulos: %.2f%%\n", nuloPercentual);
    printf("Brancos: %.2f%%\n", brancoPercentual);

    return 0;
}
