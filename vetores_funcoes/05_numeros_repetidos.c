#include <stdio.h>

int main()
{
    int numeros[10];
    int i;
    int j;
    int antes;
    int depois;
    int achou = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros repetidos:\n");

    for (i = 0; i < 10; i++)
    {
        antes = 0;
        depois = 0;

        for (j = 0; j < 10; j++)
        {
            if (numeros[j] == numeros[i] && j < i)
            {
                antes++;
            }
            if (numeros[j] == numeros[i] && j > i)
            {
                depois++;
            }
        }

        if (antes == 0 && depois > 0)
        {
            printf("%d aparece %d vezes\n", numeros[i], depois + 1);
            achou++;
        }
    }

    if (achou == 0)
    {
        printf("Nenhum numero repetido.\n");
    }

    return 0;
}
