#include<stdio.h>

void main()
{
    int n;

    printf("Insira numero: ");
    scanf("%d", &n);

    if (n==0)
    {
       printf("Numero inserido igual 0");
    }
    else //caso numero ser diferente 0
    {
      //avaliar se é positivo ou negativo
      if (n>0) // avaliar se numero positivo
      {
        //numero positivo
        printf("Numero positivo");
      }
      else
      {
        // numero negativo
         printf("Numero negativo");
      }
    }
}