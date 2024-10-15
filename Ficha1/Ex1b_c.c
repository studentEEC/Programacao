#include<stdio.h>

void main()
{
    // 1. Declarar variaveis necessárias
    float T1, T2, NotaFinal;
    char nomeAluno [15];
    char disciplina [25];

    // 2. Pedir ao user para inserir dados dos teste 1 e 2
    printf("Pretende efetuar calculo nota final para que disciplina:");
    scanf("%s", &disciplina);

    printf("Insira nome do aluno:");
    scanf("%s", &nomeAluno);

    printf("Insira nota Teste 1:");
    scanf("%f", &T1);

    printf("Insira nota Teste 2:");
    scanf("%f", &T2);
    
    // 3. Calcular a nota final, aplicando  formula NF=0.4T1+0.6T2
    NotaFinal= (0.4*T1)+(0.6*T2);

    // 4. Apresentar o resultado obtido para NF
    printf("Nota Final do aluno %s a disciplina de %s foi: %.1f valores",nomeAluno, disciplina, NotaFinal);
}