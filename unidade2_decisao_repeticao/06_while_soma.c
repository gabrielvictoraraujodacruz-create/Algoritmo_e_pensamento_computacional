// exercício 6 - soma de 1 a 10 com while
#include <stdio.h>

int main()
{
    int contador = 1;
    int soma = 0;

    printf("Calculando a soma dos números de 1 a 10:\n");

    while (contador <= 10)
    {
        printf("Adicionando %d à soma\n", contador);
        soma = soma + contador;
        contador++; // se esquecer isso o while nunca para
    }

    printf("Soma total: %d\n", soma);
    return 0;
}
