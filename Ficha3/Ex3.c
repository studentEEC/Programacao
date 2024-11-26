#include<stdio.h>

void main()
{
    int nrAlunos, countNotas = 1;
    float notaAluno;

    printf("Insira numeros alunos: ");
    scanf("%d", &nrAlunos);
     
    float mediaNotas, somatorioNotas = 0, NotaMax = 0, NotaMin = 20;
    while (countNotas <= nrAlunos)
    {
        printf("Insira nota aluno %d: \n", countNotas);
        scanf("%f", &notaAluno);

        somatorioNotas+= notaAluno; // somatorioNotas = somatorioNotas + notaAluno;
        // verificar MAX 
        if (notaAluno > NotaMax)
        {
            NotaMax = notaAluno;
        }
        // verificar MIN
        if (notaAluno < NotaMin)
        {
            NotaMin = notaAluno;
        }
        countNotas++;
    }

    mediaNotas = somatorioNotas/nrAlunos;
    printf("Media notas: %.2f\n", mediaNotas);
    printf("Nota maxima: %.2f\n", NotaMax);
    printf("Nota minima: %.2f\n", NotaMin);
}