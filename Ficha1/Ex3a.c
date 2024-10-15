#include<stdio.h>

void main()
{
    // 1. Declarar as variaveis necessárias
        //1.1 Litros consumidos - float
        float litrosConsumidos;
        //1.2 Km percorridos - float
        float kmPercorridos;
        //1.3 consumo aos 100km - float
        float consumo;

    // 2. Interargir com utilizador e pedir dados necessários
    printf("Insira litros consumidos:");
    scanf("%f", &litrosConsumidos);

    printf("Insira KM's percorridos:");
    scanf("%f", &kmPercorridos);

    // 3. Calcular o consumo aos 100km () x = litrosConsumidos / kmPercorridos * 100 )
    consumo = (litrosConsumidos/ kmPercorridos)*100;

    // 4. Apresentar resultado do consumo
    printf("Consumo aos 100km: %.1f", consumo);
}