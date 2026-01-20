#include <stdio.h>

int soma(int a, int b) {
    printf("Dentro da funcao: ");
    printf("&a => %p | &b => %p\n", &a, &b);
    return a + b;
}

int main() {
    int a = 10, b = 20;

    printf("Dentro da MAIN: ");
    printf("&a => %p | &b => %p\n", &a, &b);
    printf("----------------\n");

    printf("O resultado da soma eh: %d\n", soma(a, b));

    return 0;
}
