// exercício 9 - soma de 1 a 100 com for
#include <stdio.h>

int main()
{
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++)
    {
        soma = soma + i;
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);
    return 0;
}
