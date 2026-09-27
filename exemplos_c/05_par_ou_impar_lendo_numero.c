#include <stdio.h> // CORRIGIDO: faltava o include do printf/scanf

int main() {
    int numero; // CORRIGIDO: estava "numeros", mas o resto usa "numero"
    printf("Digite seu numero: ");
    scanf("%d", &numero); // CORRIGIDO: era "scan" e faltava fechar as aspas
    if (numero % 2 == 0)
        printf("%d é par!\n", numero); // CORRIGIDO: faltava o %d pra mostrar o número
    else
        printf("%d é impar!\n", numero);
    return 0;
}
