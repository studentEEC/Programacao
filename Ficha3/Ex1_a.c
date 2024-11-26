#include<stdio.h>

void main()
{
    // pedir 2 limites intervalo - limite 1 e limite 2
    // maximo
    // minimo
    int limite1, limite2;
    printf("Insira limite 1 :");
    scanf("%d", &limite1);
    printf("Insira limite 2 :");
    scanf("%d", &limite2);

    // verificar qual o limite max e min
    int maximo, minimo;
    if( limite1> limite2)
    {
        // então o maximo é limite 1
        maximo = limite1;
        minimo = limite2;
    }
    else // senão
    {
        // o maximo é o limite 2
        maximo = limite2;
        minimo = limite1;
    }

    int qtdImpares = 0, somaImpares = 0;

    for (int i = minimo; i <= maximo; i++)
    {
       // i vai ser numero do intervalo
       if (i % 2 != 0) // verificar se número não é divisivel por 2 -> IMPAR
       {
            // então i é impar
            // somar +1 na quantidade impares
            qtdImpares++; // qtdImpares = qtdImpares+1; || qtdImpares+=1;
            // somar i ao somatorio impares
            somaImpares += i; // somaImpares = SomaImpares+ i; 
       }
    }

   // apresentar quantidade nrImpares
   printf("No intervalo [%d , %d] existem %d nr Impares\n", minimo, maximo, qtdImpares);
   // apresentar somatorioImpares
   printf("Somatorio Impares: %d", somaImpares);
}

