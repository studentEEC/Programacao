#include<stdio.h>

void main()
{
    int num1, num2;

    printf("Insira numero 1: ");
    scanf("%d", &num1);
    printf("Insira numero 2: ");
    scanf("%d", &num2);

    // comparar valores
    // 1º caso-> num1>num2
    if (num1>num2)
    {
        printf("Numero 1 > Numero 2");
    }
    
    // 2º caso-> num2>num1
    if (num2>num1)
    {
        printf("Numero 2 > Numero 1");
    } 
}