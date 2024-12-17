#include<stdio.h>

void main()
{
    float aux, somatorioNotas = 0;
    float notasAlunos [5];
    // instrução repetição - repetir 5 vezes pedir nota
    for (int i = 0; i < 5; i++)
    {
        // interação utilizador
        printf("Insira nota %d:", i+1);
        scanf("%f", &aux);
        
        // ler valor nota e associar ao array 
        notasAlunos[i] = aux;
        somatorioNotas += aux;    
    }  

   // calcular média notas = SomatorioNotas/ NrTotalNotas
    float mediaNotas= somatorioNotas/ 5;
    printf("Media notas: %.2f \n", mediaNotas);
    printf("Notas superiores a media:\n");

    // iterar sobre o array e imprimir as notas > média
    for (int j = 0; j < 5; j++)
    {
        if (notasAlunos[j] > mediaNotas)
           printf("%.2f\n", notasAlunos[j]);       
    } 
}