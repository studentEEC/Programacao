#include<stdio.h>

void main()
{
    int numero;

    printf("Insira numero inteiro:");
    scanf("%d", &numero);

    // para saber se numero é divisel por outro- utilizar % (resto divisão)
    // X % Y= 1, X não é divisivel por Y
    // X % Y = 0, X é divisivel por Y
    if(numero%3 == 0)
    {
        numero = numero+1;
        printf("Numero divisivel");
    }
}