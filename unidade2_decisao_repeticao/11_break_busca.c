// exercício 11 - procurar o número 8 e parar com break
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("Olhando o número %d\n", i);

        if (i == 8)
        {
            printf("Achei o número 8!\n");
            break; // sai do for
        }
    }

    printf("Fim do programa.\n");
    return 0;
}
