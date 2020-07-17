//Date: June, 2020
//Author: Gabrielgscript

/*
|Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se fo- |
|rem comprados apenas os produtos A ou apenas os produtos B, o desconto será de|
|10%. Caso sejam comprados os produtos A e B, o desconto será de 15%. O custo  |
|de cada produto é, respectivamente, para os produtos A e B,$10 e $20. Elaborar|
|um programa que, por meio de sub-rotina, calcule e apresente o valor da despe-|
|sa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar   |
|mais de uma unidade de um determinado produto.                                |
*/

#include <stdio.h>

#define priceA 10.00
#define priceB 20.00

float expenses(int, int);

int main(void)
{
    int A;
    int B;

    printf("=-=-=-=-= Price List  =-=-=-=-=\n");
    printf("Product A       »»»         $10\n");
    printf("Product B       »»»         $20\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    printf("Do you want to buy how many products A: ");
    scanf("%d", &A);
    printf("Do you want to buy how many products B: ");
    scanf("%d", &B);

    if (A == 0 || B == 0)
        printf("Total with 10%% discount: $%.2f\n", expenses(A, B));
    else
        printf("Total with 15%% discount: $%.2f\n", expenses(A, B));

    return 0;
}

float expenses(int totalProductsA, int totalProductsB)
{
    float result;
    float sum;

    sum = (totalProductsA * priceA) + (totalProductsB * priceB);

    if (totalProductsA == 0 || totalProductsB == 0)
        result = sum - (sum * 10 / 100);
    else
        result = sum - (sum * 15/ 100);
    
    return result;
}
