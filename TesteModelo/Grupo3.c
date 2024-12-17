#include<stdio.h>

void main()
{
    int nrFunc;
    float horasExtraFunc;
    char categFunc;

    int nrRegistos = 0;
    float somatorioHorasExtrasTotal = 0;
    float totalHorasExtrasA = 0, totalHorasExtrasB = 0, totalHorasExtrasC = 0, totalHorasExtrasD = 0;
    int nrFuncMaxHorasExtra;
    float nrHorasExtraMax = 0;

    while (categFunc != 'X' || categFunc != 'x')
    {
        printf("Insira a sua categoria [X- Sair] : ");
        scanf("%s", &categFunc);
        if (categFunc != 'X' || categFunc != 'x')
        {
            // só avançamos com registo se categoria for diferente 'X' ou 'x'
            printf("Insira numero funcionario: ");
            scanf("%d", &nrFunc);
            printf("Insira numero horas extra: ");
            scanf("%f", &horasExtraFunc);

            nrRegistos++;
            somatorioHorasExtrasTotal += horasExtraFunc;
            switch (categFunc)
            {
                case 'A':
                    //totalHorasExtrasA += horasExtraFunc;
                    totalHorasExtrasA = totalHorasExtrasA +  horasExtraFunc;
                    break;
                case 'B':
                    totalHorasExtrasB += horasExtraFunc;
                    break;
                case 'C':
                    totalHorasExtrasC += horasExtraFunc;
                    break;
                case 'D':
                    totalHorasExtrasD += horasExtraFunc;
                    break;            
                default:
                    printf("Categoria inserida inválida");
                    break;
            }
            if (horasExtraFunc > nrHorasExtraMax)
            {
                nrFuncMaxHorasExtra = nrFunc;
            }          
        }   
    }

    // apresentar resultados!
}