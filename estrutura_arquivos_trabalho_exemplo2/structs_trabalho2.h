#ifndef STRUCTS_TRABALHO2_H
#define STRUCTS_TRABALHO2_H

#include <stdlib.h>

typedef struct list {
	struct aluno *head;
	int size;
}List;

typedef struct aluno {
	char *nome;
    int matricula;
    char *email;
    int disciplinas;
    struct aluno *next;
    struct disciplina * lista_disciplinas;
}Aluno;

typedef struct disciplina {
    char *nome;
    char *mencao;
    struct disciplina * next;
}Disciplina;

#endif 