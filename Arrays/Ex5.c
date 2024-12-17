#include<stdio.h>

void main()
{
    int numeros[8];
    int aux;
    int ultimaPosRegistada;

    for (int i = 0; i < 8; i++)
    {
        // interação com user
        printf("Insira numero inteiro positivo (negativo para terminar!):\n");
        scanf("%d", &aux);

        if (aux>=0)
        {
            //preencher array com valores inseridos
            numeros[i] = aux;
            ultimaPosRegistada = i;
        }
        else // assim que inserido nr negativo parar inserção
        {
            ultimaPosRegistada = i-1;
            break; 
        }   
           
    }

    // iterar sobre o array e imprimir valores do array
    for (int j = 0; j <= ultimaPosRegistada; j++)
    {
       printf("Pos %d: %d \n", j, numeros[j]);
    }
}