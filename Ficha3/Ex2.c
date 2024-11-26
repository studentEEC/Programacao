#include<stdio.h>

void main()
{
 int num;
 printf("Insira numero:");
 scanf("%d", &num);

 //avaliar se é numero primo
 int nrDivisores=0;
 for (int i = 1; i <= num; i++)
 {
   if (num%i ==0) // verifica se num é divisivel por i
   {
        // incrementa nr divisores
        nrDivisores++;
        printf("%d divisivel por %d\n", num, i);
   }
 }
 // resultado final
 if (nrDivisores ==2)
 {
    printf("Numero %d -> primo\n", num);
 }
 else
 {
    printf("Numero %d -> não primo\n", num);
 }
}