// exercício 15 - login com 3 tentativas
#include <stdio.h>

int main()
{
    int senha;
    int tentativas = 0;

    printf("Sistema de Login\n");

    while (tentativas < 3)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == 1234)
        {
            printf("Login realizado com sucesso!\n");
            break;
        }
        else
        {
            printf("Senha incorreta!\n");
        }
    }

    if (senha != 1234)
    {
        printf("Você errou 3 vezes. Acesso bloqueado!\n");
    }

    return 0;
}
