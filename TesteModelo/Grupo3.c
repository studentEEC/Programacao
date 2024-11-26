#include<stdio.h>

void main()
{
    int nrFunc;
    float horasExtraFunc;
    char categFunc;

    while (categFunc != 'X')
    {
        printf("Insira a sua categoria [X- Sair] : ");
        scanf("%s", &categFunc);
        if (categFunc != 'X')
        {
            printf("Insira numero funcionario: ");
            scanf("%d", &nrFunc);
            printf("Insira numero horas extra: ");
            scanf("%f", &horasExtraFunc);
        }
    }

    printf("Terminou!!!");
}