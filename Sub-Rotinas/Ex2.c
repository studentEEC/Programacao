#include<stdio.h>

float media (float n1, float n2, float n3)
{
    /*
        float res= (n1+n2+n3)/3;
        return res;
    */
    return (n1+n2+n3)/3;
}

void main()
{
    float valor1, valor2, valor3;
    printf("Insira valor 1:");
    scanf("%f", &valor1);

    printf("Insira valor 2:");
    scanf("%f", &valor2);

    printf("Insira valor 3:");
    scanf("%f", &valor3);

    float resAVG = media(valor1, valor2, valor3);
    printf("Resultado: %.2f", resAVG);
}