#include<stdio.h>

void main()
{
    float kwConsumidos;
    char tipoCliente;

    printf("Identifique o tipo de client!\n");
    printf("[A]- Particular Continente\n");
    printf("[B]- Particular Ilhas\n");
    printf("[C]- Pequenas empresas\n");
    printf("[D]- Media e Grandes empresas\n");
    printf("[E]- Estado e organismos publicos\n ");
    printf("Insira tipo client:\n");
    scanf("%c", &tipoCliente);

    printf("Insira KW consumidos: ");
    scanf("%f", &kwConsumidos);

    float custo, custoIVA;
    switch (tipoCliente)
    {
        case 'A':
            custo = kwConsumidos * 0.1865;
            custoIVA = custo+ custo*0.23;
            printf("Custo total: %f euros", custoIVA);
            break;
        case 'B':
            custoIVA = kwConsumidos * 0.1875 + (kwConsumidos * 0.1875)*0.23;
            printf("Custo total: %f euros", custoIVA);
            break;
        case 'C':
            custoIVA = kwConsumidos * 0.1754 + (kwConsumidos * 0.1754)*0.23;
            printf("Custo total: %f euros", custoIVA);
            break;
        case 'D':
            custoIVA = kwConsumidos * 0.1592 + (kwConsumidos * 0.1592)*0.23;
            printf("Custo total: %f euros", custoIVA);
            break;
        case 'E':
            custoIVA = (kwConsumidos * 0.1311) + (kwConsumidos * 0.1311)*0.23;
            printf("Custo total: %f euros", custoIVA);
            break;
        default:
            printf("Client invalido");
            break;
    }
}