#include<stdio.h>
#include<string.h>

char *strings(char *dest, char *orig)
{
    char aux [15];
    strcpy(aux, dest); // aux = EAC
    strcpy(dest, orig); // dest = PROGRAMA
    strcat(dest, aux);  // PROGRAMAEAC
}

void main()
{
    char palavraDest [10], palavraOrig [15];
    printf("Insira palavra 1:");  // EAC
    scanf("%s", &palavraDest);

    printf("Insira palavra 2:");  // PROGRAMA
    scanf("%s", &palavraOrig);

    strings(palavraDest, palavraOrig);    // PROGRAMAEAC
    printf("Palavra final: %s \n ", palavraDest);
}
