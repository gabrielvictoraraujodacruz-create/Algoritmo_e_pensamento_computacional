#include <stdio.h>

float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3;
}

int verificarSituacao(float media)
{
    if (media >= 7)
    {
        return 1;
    }
    else if (media >= 5)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float media;
    int situacao;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = calcularMedia(nota1, nota2, nota3);
    situacao = verificarSituacao(media);

    printf("\nMedia: %.2f\n", media);

    if (situacao == 1)
    {
        printf("Situacao: Aprovado\n");
    }
    else if (situacao == 2)
    {
        printf("Situacao: Recuperacao\n");
    }
    else
    {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
