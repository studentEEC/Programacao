#include<stdio.h>

void main()
{
    // cada aluno [2] poderá ter um nome até 25 chars [25]
    char nomeAlunos [2][25];
    float notasAlunos [2][3];
    char disciplinas[3][15] = {"Portugues", "Matematica", "Historia"};

    // recolher notas dos alunos
    for (int i = 0; i < 2; i++)
    {
        printf("Insira notas Aluno %d\n" ,  i+1);
        printf("Insira nome aluno: ");
        scanf("%s", &nomeAlunos[i]);
        printf("Portugues: ");
        scanf("%f", &notasAlunos[i][0]);
        printf("Matematica: ");
        scanf("%f", &notasAlunos[i][1]);
        printf("Historia: ");
        scanf("%f", &notasAlunos[i][2]);
    }

    // calcular média notas
    float somatorioNotas, mediaNotas;
    // por aluno
    for (int j = 0; j < 2; j++) // iterar sobre linhas da matriz
    {
        somatorioNotas = 0;
        for (int k = 0; k < 3; k++) // iterar sobre colunas da matriz
        {
           somatorioNotas+= notasAlunos[j][k];
        }
        mediaNotas = somatorioNotas/3;
        printf("Media %s : %.2f valores\n", nomeAlunos[j], mediaNotas);
    }
    
    // por disciplina
    for (int c = 0; c < 3; c++) // iterar sobre coluna matriz
    {
        somatorioNotas = 0;
        for (int l = 0; l < 2; l++) // iterar sobre a linha
        {
           somatorioNotas += notasAlunos[l][c];
        }  
        mediaNotas = somatorioNotas/2;
        printf("Media %s : %.2f valores\n", disciplinas[c], mediaNotas);  
    }
}