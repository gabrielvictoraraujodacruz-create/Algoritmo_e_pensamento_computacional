#include <stdio.h>

int main()
{
    float vendas[7];
    float total = 0;
    float media;
    float maior;
    int dia_maior = 1;
    int dias_acima = 0;
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Digite o valor vendido no dia %d: ", i + 1);
        scanf("%f", &vendas[i]);
    }

    maior = vendas[0];

    for (i = 0; i < 7; i++)
    {
        total = total + vendas[i];

        if (vendas[i] > maior)
        {
            maior = vendas[i];
            dia_maior = i + 1;
        }

        if (vendas[i] > 1000)
        {
            dias_acima++;
        }
    }

    media = total / 7;

    printf("\nTotal vendido na semana: R$ %.2f\n", total);
    printf("Media diaria de vendas: R$ %.2f\n", media);
    printf("Dia com maior venda: dia %d (R$ %.2f)\n", dia_maior, maior);
    printf("Dias com vendas acima de R$ 1000,00: %d\n", dias_acima);

    return 0;
}
