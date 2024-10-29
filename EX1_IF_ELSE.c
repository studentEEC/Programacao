#include<stdio.h>

void main()
{
    int num;
    
    printf("Insira numero:" );
    scanf("%d", &num);

    if (num%2 == 0) //verifica se num é divisivel por 2
    {
        // numero é par
        printf("Numero par");
    }
    else
    {
        //numero impar
         printf("Numero impar");
    }   
}