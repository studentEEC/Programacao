#include<stdio.h>

void main()
{
    // declarar variavel numero
    int numero = 0;
    int somatorioPares = 0;

    while (numero>=0)
    {
        // interração com user 
        printf("Insira numero:");
        scanf("%d", &numero);

        // verificar se numero é divisivel por 2
        if (numero % 2 == 0 && numero>0)
        {
            somatorioPares = somatorioPares + numero;
        }
    }
    printf("Somatorio pares: %d", somatorioPares);
}