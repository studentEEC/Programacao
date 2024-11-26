#include<stdio.h>

void main()
{
    int somatorio = 0;

    for (int i = 0; i <= 1000; i++)
    {
        somatorio = somatorio + i;
    }
    
    printf("Somatorio numeros 0 a 1000: %d", somatorio);
}