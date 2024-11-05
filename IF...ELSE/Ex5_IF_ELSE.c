#include<stdio.h>

void main()
{
    // 1. Recolher valores referentes aos 3 lados do triangulo
    float ladoA, ladoB, ladoC;

    printf("Insira lado A: ");
    scanf("%f", &ladoA);
    printf("Insira lado B: ");
    scanf("%f", &ladoB);
    printf("Insira lado C: ");
    scanf("%f", &ladoC);
    // 2. Verificar se o triangulo é válido
    if ((ladoA+ladoB>ladoC) && (ladoA+ladoC>ladoB) && (ladoB+ladoC>ladoA))
    {
        //triangulo é valido
        printf("Triangulo valido!");
        // 3. Depois de saber se triangulo é valido, classificar o tipo de triangulo: equilatero, isósceles, escaleno
        // equilatero: a=b e b=c e c=a
        if (ladoA==ladoB && ladoB==ladoC && ladoC==ladoA)
        {
           printf("Equilatero");
        }
        else if(ladoA==ladoB || ladoB==ladoC || ladoC==ladoA)     // isosceles: a=b ou b=c ou c=a
        {
            printf("Isosceles");
        }
        else // escaleno: a!=b e b!=c e c!=a
        {
            printf("Escaleno");
        }
    }
    else
    {
        printf("Triangulo invalido!");
    }
}