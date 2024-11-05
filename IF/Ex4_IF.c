#include<stdio.h>

void main()
{
    int idade;

    printf("Insira idade utente: ");
    scanf("%d", &idade);

    // dar sangue-> idade>=18 e idade <67
    if (idade>=18 && idade<67)
    {
        printf("Utente pode dar sangue");
    }
    
    // não dar sangue -> idade <18 ou idade>=67
    if (idade<18 || idade>=67)
    {
        printf("Utente não pode dar sangue");
    }
}