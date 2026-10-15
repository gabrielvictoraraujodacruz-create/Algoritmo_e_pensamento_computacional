#include <stdio.h>

float calcularDesconto(float valor)
{
    float desconto;

    if (valor < 100)
    {
        desconto = 0;
    }
    else if (valor < 500)
    {
        desconto = valor * 0.05;
    }
    else
    {
        desconto = valor * 0.10;
    }

    return desconto;
}

float calcularValorFinal(float valor, float desconto)
{
    return valor - desconto;
}

int main()
{
    float valor;
    float desconto;
    float valor_final;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor);

    desconto = calcularDesconto(valor);
    valor_final = calcularValorFinal(valor, desconto);

    printf("\nValor original: R$ %.2f\n", valor);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valor_final);

    return 0;
}
