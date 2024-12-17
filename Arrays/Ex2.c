#include<stdio.h>

void imprimirArray(int n [], int size)
{
    //interar sobre o array e imprimir valor cada posição na consola
    for (int i = 0; i < size; i++)
    {
       printf("Pos %d : %d\n", i, n[i]);
    }
}

void preencherArray(int n[10])
{
    // preencher array 
    // 1ª (i=0) pos = 100
    // a cada pos (i>0 && i<10) incrementar +10
    int aux;
    for (int i = 0; i <=9 ; i++) // i<10
    {
        if (i == 0)
           aux =100;
        else    
            aux += 10;

        n[i] = aux;
    }
}


void main()
{
    int numeros [10];
    preencherArray(numeros);
    imprimirArray(numeros, 10);
}