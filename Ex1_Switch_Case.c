#include<stdio.h>

void main()
{
    int num;
    printf("Insira numero:");
    scanf("%d", &num);

 /*
    if (num>=1 && num<=7) //verificar se numero >=1 e <=7
    {
       if (num==1)
       {
        printf("Domingo");
       }
       else if (num==2)
       {
        printf("Segunda");
       }
       else if (num==3)
       {
        printf("Terça");
       }
       else if (num==4)
       {
        printf("Quarta");
       }
       else if (num==5)
       {
        printf("Quinta");
       }
       else if (num==6)
       {
        printf("Sexta");
       }
       else
       {
        printf("Sabado");
       }
      
    }
    else
    {
        printf("Numero inserido invalido!");
    }
*/   
    switch (num)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda");
            break;
        case 3: 
            printf("Terça");
            break;
        case 4: 
            printf("Quarta");
            break;
        case 5: 
            printf("Quinta");
            break;
        case 6: 
            printf("Sexta");
            break;
        case 7: 
            printf("Sabado");
            break;
        default:
            printf("Numero invalido");
            break;
    }
}