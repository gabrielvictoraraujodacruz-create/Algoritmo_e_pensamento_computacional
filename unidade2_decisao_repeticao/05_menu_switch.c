// exercício 5 - menu com switch
#include <stdio.h>

int main()
{
    int opcao;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Você escolheu iniciar um novo jogo.\n");
        break;
    case 2:
        printf("Você escolheu carregar um jogo salvo.\n");
        break;
    case 3:
        printf("Saindo do jogo. Até logo!\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}
