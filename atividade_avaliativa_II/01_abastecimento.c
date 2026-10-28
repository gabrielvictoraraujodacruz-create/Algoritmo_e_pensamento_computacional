#include <stdio.h>

float calcularTotal(float consumo[], int n)
{
    float total = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        total = total+consumo[i];
    }

    return total;
}

float calcularMedia(float consumo[], int n)
{
    float total;
    float media;

    total = calcularTotal(consumo, n);
    media = total/n;

    return media;
}

int contarViagens(float consumo[], int n)
{
    int quantidade = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (consumo[i] > 50){
            quantidade++;
        }
    }

    return quantidade;
}

int main()
{
    float consumo[10];
    float total;
    float media;
    float maior;
    int viagem_maior = 1;
    int viagens_acima;
    int i;

    printf("====== Monitoramento de abastecimento ======\n\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Litros consumidos na viagem %d : ", i + 1);
            scanf("%f", &consumo[i]);

            if (consumo[i] < 0)
            {
                printf("Valor invalido!Digite novamente.\n");
            }
        } while (consumo[i] < 0);
    }

    maior = consumo[0];

    for (i = 0; i < 10; i++)
    {
        if (consumo[i] > maior)
        {
            maior = consumo[i];
            viagem_maior = i+1;
        }
    }

    total = calcularTotal(consumo, 10);
   media = calcularMedia(consumo, 10);
    viagens_acima = contarViagens(consumo, 10);


    printf("\n==== Resultados =====\n");
    printf("Consumo total : %.2f litros\n", total);
    printf("Consumo medio por viagem : %.2f litros\n", media);
    printf("Viagem com maior consumo : viagem %d (%.2f litros)\n", viagem_maior, maior);
    printf("Viagens com consumo acima de 50 litros : %d\n", viagens_acima);

    printf("\nConsumos na ordem inversa :\n");

    for (i = 9; i>=0; i--)
    {
        printf("Viagem %d : %.2f litros\n", i + 1, consumo[i]);
    }

    return 0;
}
