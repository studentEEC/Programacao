#include<stdio.h>

int pot (int base, int exp)
{
    // exp=0
    if (exp==0)
    {
        return 1;
    }
    else if(exp>= 1) // exp>=1
    {
        return base* pot(base, exp-1);
    }
    else  // expoente é negativo
    {
        return 0; // resultado inválido
    }
}

void main()
{
    int b, e, result;

    printf("Insira base:");
    scanf("%d", &b);

    printf("Insira expoente:");
    scanf("%d", &e);
    
    result = pot(b, e);
    printf("Potencia base %d expoente %d: %d",b,e,result);
}