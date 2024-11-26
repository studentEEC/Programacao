#include<stdio.h>

int soma(int n1, int n2)
{
    /*
    int res = n1+n2;
    return res;
    */

    return n1+n2;
}

void main()
{
    int a, b;
    printf("Insira valor 1:");
    scanf("%d", &a);
    printf("Insira valor 2:");
    scanf("%d", &b);

    int resSOMA = soma(a, b);

    printf("Resultado: %d", resSOMA);
}


