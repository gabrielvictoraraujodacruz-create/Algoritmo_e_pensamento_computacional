// exercício 12 - só os pares de 1 a 20 com continue
#include <stdio.h>

int main()
{
    int i;

    printf("Números pares de 1 a 20:\n");

    for (i = 1; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            continue; // se for ímpar pula
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
