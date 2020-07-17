//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12      |
|quilômetros por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto (variável TEMPO) e a velocidade    |
|média (variável VELOCIDADE) durante a viagem. Desta forma, será possível obter a distância pecorrida com a fórmula:   |
|DISTÂNCIA <-- TEMPO * VELOCIDADE. A partir do valor da distâcia, basta calcular a quantidade de litros de combustível |
|utilizada na viagem com fórmula LITROS_USADOS <-- DISTÂNCIA / 12. O programa deve apresentar os valores da velocidade |
|média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizados na viagem.                   |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float tempo, velocidade, distancia, litrosUsados;

    printf("Tempo da viagem(em horas): ");
    scanf("%f", &tempo);
    printf("Velocidade(em Km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litrosUsados = distancia / 12;

    printf("\nVelocidade Média: %.2fKm/h\n"
    "Tempo da viagem: %.1f horas\n"
    "Distância percorrida: %.1fKm\n"
    "Litro utilizados: %.1fL\n", velocidade, tempo, distancia, litrosUsados);

    return 0;
}
