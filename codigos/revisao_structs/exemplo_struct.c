#include <stdio.h>

struct jogador {
    char nome[100];
    float altura;
    float salario;
    int idade;
};

int main() {
    struct jogador j1 = { 
        .nome = "Joao da Silva",
        .altura = 1.86,
        .salario = 7000.00
    };

    j1.nome[0] = 'a';
    j1.nome[1] = 'r';
    j1.nome[2] = 'x';

    printf("Nome: %s\n", j1.nome);
    printf("Salario: R$ %.2f\n", j1.salario);

    return 0;
}
