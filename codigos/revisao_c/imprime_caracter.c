#include <stdio.h>

int main() {

    char letra;

    letra = getchar();

    printf("A letra eh '%c'\n", letra);
    printf("A posicao da letra na tabela ASCII eh %d\n", letra);

    return 0;
}
