#include<stdio.h>

void main()
{
    int numero;
    int somatorioPares = 0;
    do
    {
        printf("Insira numero:");
        scanf("%d", &numero);

        if (numero % 2 == 0 && numero>0)
        {
            somatorioPares = somatorioPares + numero;
        }
        
    } while (numero>0);
    
    printf("Somatorio pares: %d", somatorioPares);

}