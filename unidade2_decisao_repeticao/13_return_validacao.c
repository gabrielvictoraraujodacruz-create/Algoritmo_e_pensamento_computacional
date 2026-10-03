// exercício 13 - parar o programa com return
#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        printf("Número inválido: negativo.\n");
        return 0; // o programa para aqui
    }

    printf("Número válido: %d\n", numero);
    return 0;
}
