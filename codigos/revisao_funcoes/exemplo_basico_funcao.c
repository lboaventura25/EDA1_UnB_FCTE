#include <stdio.h>

int eh_par(int a);

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("%s\n", eh_par(numero) ? "Par" : "Impar");
    return 0;
}

int eh_par(int a) {
    return a % 2 == 0;
}
