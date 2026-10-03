// exercício 1 - idade com if e else
#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Acesso liberado: você é maior de idade.\n");
    }
    else
    {
        printf("Acesso negado: você é menor de idade.\n");
    }

    return 0;
}
