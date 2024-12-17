#include<stdio.h>

void main()
{
    // preencher array 
    // 1ª (i=0) pos = 100
    // a cada pos (i>0 && i<10) incrementar +10
    int numeros [10];
    int aux;
    for (int i = 0; i <=9 ; i++) // i<10
    {
        if (i == 0)
           aux =100;
        else    
            aux += 10;

        numeros[i] = aux;
    }

    //interar sobre o array e imprimir valor cada posição na consola
    for (int j = 0; j <= 9; j++)
    {
       printf("Pos %d : %d\n", j, numeros[j]);
    }
}