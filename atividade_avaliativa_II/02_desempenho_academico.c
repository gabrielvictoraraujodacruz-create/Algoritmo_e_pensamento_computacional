#include <stdio.h>

float calcularMedia(int notas[], int n)
{
    float soma = 0;
    float media;
    int i;

    for (i = 0; i < n; i++)
    {
        soma = soma+notas[i];
    }

    media = soma/n;

    return media;
}

int contarAprovados(int notas[], int n)
{
    int aprovados = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (notas[i] >= 7){
            aprovados++;
        }
    }

    return aprovados;
}

int encontrarMaiorNota(int notas[], int n)
{
    int maior;
    int i;

    maior = notas[0];

    for (i = 1; i < n; i++)
    {
        if (notas[i] > maior){
            maior = notas[i];
        }
    }

    return maior;
}

int contarAcimaMedia(int notas[], int n, float media)
{
    int acima = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (notas[i] > media)
        {
            acima++;
        }
    }

    return acima;
}

int main()
{
    int notas[12];
    float media;
    int aprovados;
    int maior;
    int menor;

    int acima_media;
    int i;

    printf("==== Analise de desempenho academico====\n\n");

    for (i = 0; i < 12; i++)
    {
        do
        {
            printf("Nota do aluno %d(0 a 10): ", i + 1);
            scanf("%d", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10)
            {
                printf("Nota invalida ! digite novamente.\n");
            }
        } while (notas[i] < 0 || notas[i] > 10);
    }

    menor = notas[0];

    for (i=1; i < 12; i++)
    {
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    media = calcularMedia(notas, 12);
    aprovados = contarAprovados(notas, 12);
     maior = encontrarMaiorNota(notas, 12);
    acima_media = contarAcimaMedia(notas, 12, media);

    printf("\n======Resultados ========\n");
    printf("Media da turma : %.2f\n", media);
    printf("Alunos aprovados : %d\n", aprovados);
    printf("Maior nota : %d\n", maior);
    printf("Menor nota : %d\n", menor);
    printf("Alunos com nota acima da media : %d\n", acima_media);

    printf("\nNotas cadastradas :\n");

    for (i = 0; i < 12; i++)
    {
        printf("Aluno %d : %d\n", i + 1, notas[i]);
    }

    return 0;
}
