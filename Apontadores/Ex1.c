#include<stdio.h>
#include<string.h>

char *FirstVogal(char *s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        {
            return &s[i];
        }
    }
    return NULL;
}

void main()
{
    char word [15];

    printf("Insira uma palavra:");
    scanf("%s", &word);
    strupr(word); // uppercase - Maiusculas
   
    int *address = FirstVogal(word);
    printf("Endereço vogal: %d \n", address);
    printf("Primeira vogal encontrada: %c \n", *address);
}