#include <stdio.h>

// Exemplo de 5! = 5 * 4 * 3 * 2 * 1
int fatorial(int numero) {
    int resultado = 1;

    for(int i = numero; i >= 1; i--) {
        resultado *= i;
    }

    return resultado;
}

int fatorial_recursivo(int numero) { // 2
    if (numero == 1 || numero == 0) return 1;

    return numero * fatorial_recursivo(numero - 1);
    // return 3 * fatorial_recursivo(2)
}

int main() {
    int N;
    
    scanf("%d", &N);

    printf("O resultado iterativo de %d! = %d\n", N, fatorial(N));
    printf("O resultado recursivo de %d! = %d\n", N, fatorial_recursivo(N));

    return 0;
}