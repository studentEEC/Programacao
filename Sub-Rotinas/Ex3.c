#include<stdio.h>

int potMath(int base, int exp)
{
    int potenciaMath =1;
    for (int i = 1; i <= exp; i++)
    {
        potenciaMath = potenciaMath * base;
    }  
    return potenciaMath;
}

void main()
{
    int b, e;
    printf("Insira valor base:");
    scanf("%d", &b);
    printf("Insira valor expoente:");
    scanf("%d", &e);

    int res = potMath(b, e);
    printf("Resultado: %d\n ", res);
}