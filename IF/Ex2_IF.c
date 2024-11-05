#include<stdio.h>

void main()
{
    float taxa = 0.035; //3.5%
    float salarioFunc, salarioMin;

    printf("Inserir valor salario minimo: ");
    scanf("%f", &salarioMin);
    printf("Inserir salario funcionario: ");
    scanf("%f", &salarioFunc);

    // opção 1
    //float diffSalario = salarioFunc-salarioMin;
    //float impostoIRS = diffSalario*taxa;

    // opção 2
    float impostoIRS = (salarioFunc-salarioMin)*taxa;

    printf("Imposto adicional IRS: %.2f euros", impostoIRS);
}