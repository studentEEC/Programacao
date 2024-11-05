#include<stdio.h>

void main()
{
    float temperatura, mediaTemperaturas, maxTemperatura = 0, somatorioTemperaturas = 0;
    int nrDias = 0;

    int nrRegistos;
    printf("Quantos registos quer guardar? ");
    scanf("%d", &nrRegistos);

    // condição paragem
    while (nrDias<nrRegistos) // nrRegistos>nrDias
    {
        printf("Insira temperatura: ");
        scanf("%f", &temperatura);

        // incrementar nr dias
        nrDias = nrDias +1; // nrDias++;
        // somatorio temperaturas
        somatorioTemperaturas = somatorioTemperaturas +temperatura; 
        //somatorioTemperaturas +=temperatura;

        // verificar se temperatura é max
        if (temperatura > maxTemperatura)
        {
            maxTemperatura = temperatura;
        }
    }

    // calcular media temperatura
    mediaTemperaturas = somatorioTemperaturas/ nrDias;
    printf("Media temperaturas registada em %d dias foi %.1f graus\n", nrDias, mediaTemperaturas);
    printf("Temperatura maxima foi %.1f graus", maxTemperatura);
}