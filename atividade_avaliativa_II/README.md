# 📝 Atividade Avaliativa II — Programação em C

Laços de repetição, funções e vetores. São três problemas, cada um num arquivo `.c` separado.

| Arquivo | Exercício |
|---|---|
| [`01_abastecimento.c`](01_abastecimento.c) | **Monitoramento de abastecimento**: consumo de combustível de 10 viagens num `float consumo[10]`. Total, média, viagem de maior consumo, quantas passaram de 50 litros e os consumos na ordem inversa. Funções `calcularTotal()`, `calcularMedia()` e `contarViagens()` |
| [`02_desempenho_academico.c`](02_desempenho_academico.c) | **Desempenho acadêmico**: notas de 12 alunos num `int notas[12]`, só aceitando de 0 a 10 (nota inválida pede de novo a do mesmo aluno). Média, aprovados (nota 7 ou mais), maior e menor nota e quantos ficaram acima da média. Funções `calcularMedia()`, `contarAprovados()`, `encontrarMaiorNota()` e `contarAcimaMedia()` |
| [`03_controle_estoque.c`](03_controle_estoque.c) | **Controle de estoque**: 10 produtos num `int estoque[10]` e um menu com `do while` e `switch` pra consultar, dar entrada e dar saída. Produto vai de 1 a 10 e é validado antes de mexer no vetor; não deixa sair mais do que tem nem movimentar zero ou negativo. Funções `exibirMenu()`, `registrarEntrada()`, `registrarSaida()`, `calcularTotalEstoque()` e `contarProdutosZerados()` |

Pra rodar:

```
gcc 01_abastecimento.c -o abastecimento
./abastecimento
```
