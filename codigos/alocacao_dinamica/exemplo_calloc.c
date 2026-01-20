#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char * nome;
    int idade;
    int matricula;
} Aluno;

int main() {
    Aluno * alunos;

    alunos = calloc(3, sizeof(Aluno));

    for(int i = 0; i < 3; i++) {
        alunos[i].nome = calloc(100, sizeof(char));
        printf("Digite o nome do aluno[%d]: ", i);
        scanf(" %[^\n]", alunos[i].nome);
        getchar();
    }

    for(int i = 0; i < 3; i++) {
        printf("Aluno[%d] -> %p | ", i, &alunos[i]);
        printf("Nome = '%s' | ", alunos[i].nome);
        printf("Idade = %d | ", alunos[i].idade);
        printf("Matricula = %d\n", alunos[i].matricula);
        printf("---------------------\n");
    }

    for(int i = 0; i < 3; i++) {
        free(alunos[i].nome);
    }
    free(alunos);


    return 0;
}
