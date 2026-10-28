#include <stdio.h>

void exibirMenu()
{
    printf("\n==== CONTROLE DE ESTOQUE =====\n");
    printf("1. Consultar estoque\n");
    printf("2. Registrar entrada\n");
    printf("3. Registrar saida\n");
    printf("4. Encerrar\n");
    printf("Escolha uma opcao : ");
}

void registrarEntrada(int estoque[], int produto, int quantidade)
{
    if (quantidade <= 0)
    {
        printf("Quantidade invalida! Deve ser maior que zero.\n");
    }
    else
    {
        estoque[produto - 1] = estoque[produto - 1]+quantidade;
        printf("Entrada registrada!Produto %d agora tem %d unidades.\n", produto, estoque[produto - 1]);
    }
}

void registrarSaida(int estoque[], int produto, int quantidade)
{
    if (quantidade <= 0)
    {
        printf("Quantidade invalida! Deve ser maior que zero.\n");
    }
    else if (quantidade > estoque[produto - 1])
    {
        printf("Estoque insuficiente! O produto %d tem apenas %d unidades.\n", produto, estoque[produto - 1]);
    }
    else
    {
        estoque[produto - 1] = estoque[produto - 1]-quantidade;
        printf("Saida registrada ! Produto %d agora tem %d unidades.\n", produto, estoque[produto - 1]);
    }
}

int calcularTotalEstoque(int estoque[], int n)
{
    int total = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        total=total+estoque[i];
    }

    return total;
}

int contarProdutosZerados(int estoque[], int n)
{
    int zerados = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (estoque[i] == 0){
            zerados++;
        }
    }

    return zerados;
}

int main()
{
    int estoque[10];
    int opcao;
    int produto;
    int quantidade;

    int i;

    printf("=== Cadastro do estoque inicial==\n\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Quantidade inicial do produto %d: ", i + 1);
            scanf("%d", &estoque[i]);

            if (estoque[i] < 0)
            {
                printf("Quantidade invalida! Digite novamente.\n");
            }
        } while (estoque[i] < 0);
    }

    do
    {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\n== Estoque atual ===\n");
                for (i=0; i<10; i++)
                {
                    printf("Produto %d : %d unidades\n", i + 1, estoque[i]);
                }
                printf("Total de unidades : %d\n", calcularTotalEstoque(estoque, 10));
                printf("Produtos sem estoque: %d\n", contarProdutosZerados(estoque, 10));
                break;

            case 2:
                printf("Numero do produto(1 a 10): ");
                scanf("%d", &produto);

                if (produto<1 || produto>10)
                {
                    printf("Produto invalido!\n");
                }
                else
                {
                    printf("Quantidade de entrada : ");
                    scanf("%d", &quantidade);
                    registrarEntrada(estoque, produto, quantidade);
                }
                break;
            case 3:
                printf("Numero do produto (1 a 10): ");
                scanf("%d", &produto);

                if (produto < 1 || produto > 10)
                {
                    printf("Produto invalido!\n");
                }
                else
                {
                       printf("Quantidade de saida: ");
                    scanf("%d", &quantidade);
                    registrarSaida(estoque, produto, quantidade);
                }
                break;

            case 4:
                printf("Programa encerrado\n");
                break;

            default:
                printf("Opcao invalida!Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
