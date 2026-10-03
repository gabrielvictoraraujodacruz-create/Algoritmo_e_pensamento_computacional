// exercício 16 - testando as questões 3 e 6 da verificação
#include <stdio.h>

int main()
{
    int x = 5;
    int i;

    // questão 3
    printf("Questão 3: ");
    if (x > 10)
    {
        printf("A");
    }
    else if (x > 5)
    {
        printf("B");
    }
    else
    {
        printf("C");
    }
    printf("\n");

    // questão 6
    printf("Questão 6: ");
    for (i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
