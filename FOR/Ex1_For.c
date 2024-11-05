#include<stdio.h>

void main()
{
    int numero, factorial = 1;

    printf("Insira numero: ");
    scanf("%d", &numero);

    if (numero == 0)
    {
        factorial = 1;
    }
    else  // numero >=1
    {
        // calcular fatorial
        for (int i = numero; i>= 1; i--)
        {
           factorial= factorial * i;
        }        
    }
    printf("Factorial %d : %d", numero, factorial);
}