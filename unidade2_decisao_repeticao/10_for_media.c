// exercício 10 - média de 5 números com for
#include <stdio.h>

int main()
{
    int i;
    float numero, soma, media;

    soma = 0;

    // Entrada
    for (i = 1; i <= 5; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%f", &numero);
        soma = soma + numero;
    }

    // Processamento
    media = soma / 5;

    // Saída
    printf("A média dos números é: %.2f\n", media);

    return 0;
}
