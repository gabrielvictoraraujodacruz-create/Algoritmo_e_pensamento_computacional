// exercício 4 - cartão de crédito com else if
#include <stdio.h>

int main()
{
    int idade;
    float renda;

    // Entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda R$: ");
    scanf("%f", &renda);

    // Saída
    if (idade >= 18 && renda >= 2000)
    {
        printf("Aprovado para o cartão de crédito premium.\n");
    }
    else if (idade >= 18 && renda >= 1000)
    {
        printf("Aprovado para o cartão de crédito básico.\n");
    }
    else
    {
        printf("Não aprovado para cartão de crédito.\n");
    }

    return 0;
}
