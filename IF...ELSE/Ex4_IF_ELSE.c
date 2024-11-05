#include<stdio.h>

void main()
{
    float teste1, teste2;

    printf("Insira nota teste 1: ");
    scanf("%f", &teste1);
    printf("Insira nota teste 2: ");
    scanf("%f", &teste2);

    // nota minima T1-> 8.5
    // nota minimo T2 -> 9
    if (teste1>8.5 && teste2>9)
    {
        //cumpriu requesitos minimos
        // nota final -> (T1+T2)/2
        float notaFinal = (teste1+teste2)/2;

        // nota final>=10 -> aprovado
        if (notaFinal >= 10)
        {
            printf("Aluno Aprovado");
            if(notaFinal>=17)
            {
               printf("Aluno deve fazer defesa oral"); 
            }
            else
            {
                 printf("Aluno não precisa defesa oral"); 
            }
        }
        else // caso nota final < 10
        {
            printf("Aluno reprovado");
        }
    }
    else
    {
        printf("Aluno reprovado");
    }
}