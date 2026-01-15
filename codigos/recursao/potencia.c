#include <stdio.h>

int pot(int base, int potencia) {
    int resultado = 1;
    for(int i = potencia; i > 0; i--) {
        resultado *= base;
    }

    return resultado;
}

int pot_recursiva(int base, int potencia) {
    if (potencia == 0) return 1;

    return base * pot_recursiva(base, potencia - 1);
}

int main() {
    int base, potencia;

    printf("Digite a sua base: ");
    scanf("%d", &base);
    printf("Digite a sua potencia: ");
    scanf("%d", &potencia);

    printf("O resultado da operacao iterativa %d^%d = %d\n", base, potencia, pot(base, potencia));
    printf("O resultado da operacao recursiva %d^%d = %d\n", base, potencia, pot_recursiva(base, potencia));

    return 0;
}