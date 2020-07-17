//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que calcule e apresente em metros por segundo o valor da velocidade de um projétil que percorre |
|um distância em quilômetros a um espaço de tempo em minutos. Utilize a fórmula:                                       |
|VELOCIDADE <-- (DISTÂNCIA * 1000) / (TEMPO * 60).                                                                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float distancia, tempo, velocidade;

    printf("CALCULO DE VELOCIDADE\n");

    printf("Distância(Km): ");
    scanf("%f", &distancia);
    printf("Tempo(minutos): ");
    scanf("%f", &tempo);

    velocidade = (distancia * 1000) / (tempo * 60);

    printf("Velocidade média: %.2fm/s\n", velocidade);
    
    return 0;
}
