#include<stdio.h>

void main()
{
    // 0- Declarar variaveis 
    float teste1, teste2;

    // 1- Recolher nota teste 1 e 2
    printf("Insira a nota teste 1:");
    scanf("%f", &teste1);
    printf("Insira a nota teste 2:");
    scanf("%f", &teste2);

    // 2- Calcular media testes
    float media = (teste1+teste2)/2;

    // 3- Apresentar resultado da media
    printf("Media: %f \n Teste 1: %f - Teste 2: %f", media, teste1, teste2);
}