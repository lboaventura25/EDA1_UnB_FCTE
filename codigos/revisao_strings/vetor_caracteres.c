#include <stdio.h>

int main() {
    char vetor[100] = "Ola!";
    
    printf("A minha frase antes eh '%s'\n", vetor);
    fgets(vetor, 100, stdin);
    printf("A minha frase depois eh '%s'\n", vetor);

    return 0;
}
