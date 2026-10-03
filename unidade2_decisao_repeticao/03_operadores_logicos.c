// exercício 3 - usando o && (e)
#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade < 65)
    {
        printf("Você está na idade adulta.\n");
    }
    else
    {
        printf("Você é jovem ou idoso.\n");
    }

    return 0;
}
