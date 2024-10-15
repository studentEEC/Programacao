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
        //1.4 custo combustivel p/litro
        float custoCombustivel;

    // 2. Interargir com utilizador e pedir dados necessários
    printf("Insira litros consumidos:");
    scanf("%f", &litrosConsumidos);

    printf("Insira KM's percorridos:");
    scanf("%f", &kmPercorridos);

    printf("Insira o custo combustivel/litro:");
    scanf("%f", &custoCombustivel);

    // 3. Calcular o consumo aos 100km () x = litrosConsumidos / kmPercorridos * 100 )
    consumo = (litrosConsumidos/ kmPercorridos)*100;

    // 4. Caculo custo viagem (x = litros consumidos aos 100km * custo combustivel)

    float custoViagem = consumo * custoCombustivel;

    // 5. Apresentar resultado do consumo e custo
    printf("Consumo aos 100km foi %.1f litros e teve um custo de %.2f euros", consumo, custoViagem);
}