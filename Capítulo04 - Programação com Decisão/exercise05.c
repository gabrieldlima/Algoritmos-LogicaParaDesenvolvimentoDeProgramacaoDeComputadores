//Date: January, 2020
//Author: Gabrielgscript;

/*
|Efetuar a leitura de três valores numéricos (representados pelas variáveis A, B e C) e processar o cálculo da equação |
|completa de segundo grau, utilizando a fórmula de Bhaskara (considerar para a solução do problema todas as possíveis  |
|condições para delta: delta < 0 - não há solução real, delta > 0 - há duas soluções reais e diferentes e delta = 0 -  |
|há apenas um solução real). Lembre-se de que é completa a equação de segundo grau que possui todos os coeficientes A, |
|B e C diferentes de zero. O programa deve apresentar respostas para todas as condições estabelecidas para delta.      |
*/

#include <math.h>
#include <stdio.h>

int main(){
    float a, b, c, delta, raiz_delta;

    printf("BHASKARA\n");

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C : ");
    scanf("%f", &c);

    delta = (pow(b, 2) - 4*a*c);

    if(delta >= 0)
    {
        if(delta == 0)
        {

            printf("A raiz x1 = %f\n", ((-b + sqrt(delta))/2*a));
        
        }else{
            
            printf("A raiz x1 = %f\n", ((-b + sqrt(delta))/2*a));
            printf("A raiz x2 = %f\n", ((-b - sqrt(delta))/2*a));
        
        }
    }else{
        delta = fabs(delta);
        raiz_delta = sqrt(delta);

        printf("A raiz x1 = %f + %fi\n", ((-b)/2*a), ((raiz_delta)/2*a));
        printf("A raiz x2 = %f - %fi\n", ((-b)/2*a), ((raiz_delta)/2*a));
    }

    return(0);
}
