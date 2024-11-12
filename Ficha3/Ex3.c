#include<stdio.h>

void main()
{
    int nrAlunos, countNotas = 1;
    float notaAluno;

    printf("Insira numeros alunos: ");
    scanf("%d", &nrAlunos);


    while (countNotas <= nrAlunos)
    {
        printf("Insira nota aluno %d: ", countNotas);
        scanf("%f", &notaAluno);

        countNotas++;
    }
}