// exercício 14 - menu do banco com do while e switch
#include <stdio.h>

int main()
{
    int opcao;
    float saldo = 1000;
    float valor;

    do
    {
        printf("\n=== SISTEMA BANCÁRIO ===\n");
        printf("1. Consultar Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Seu saldo atual é: R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o valor para depósito: R$ ");
            scanf("%f", &valor);
            if (valor > 0)
            {
                saldo = saldo + valor;
                printf("Depósito realizado! Novo saldo: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Valor inválido!\n");
            }
            break;
        case 3:
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo)
            {
                saldo = saldo - valor;
                printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
            }
            else
            {
                printf("Valor inválido ou saldo insuficiente!\n");
            }
            break;
        case 4:
            printf("Obrigado por usar nosso sistema!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
        }
    } while (opcao != 4);

    return 0;
}
