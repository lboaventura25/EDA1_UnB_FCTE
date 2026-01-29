#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include "structs_trabalho2.h"

void main_trabalho2();
void menu_incio(int *);
void menu_cadastro_aluno(List *);
void menu_encerra();
Aluno * menu_vizualiza_aluno(List * list);
void menu_do_aluno(Aluno *);
void menu_edita_aluno(Aluno *);
List * create_list();
Aluno * create_aluno();
void push(List *, Aluno *, int);
Aluno * buscar_aluno(List *, int);
void print_list(List *, int);
void print_aluno(Aluno *, int);
int is_empty(List **);
Aluno * busca_perfeita(List *, char *);
void edita_nome(char *, int);
int index_of(List *, char *, int);
List * alunos_parecidos(List *, char *);
int index_of_disciplina(Aluno *, char *);
Aluno * at_pos(List *, int);
Disciplina * at_pos_disciplina(Aluno *, int);
Disciplina * create_disciplina();
Disciplina * menu_cadastra_disciplina();
void push_disciplina(Aluno *, Disciplina *);
void print_list_disciplina(Aluno *);
Disciplina * menu_edita_disciplina(Aluno *);
void exclui_aluno(List *, Aluno *);
void pop_index_aluno(List *, Aluno *, Aluno *);
void edita_disciplina(Disciplina *);
int is_empty_disciplina(Aluno *);
void exclui_disciplina(Aluno *, Disciplina *);
void pop_aluno(List *, int);
void pop_disciplina(Aluno *, int);
void pop_index_disciplina(Aluno *, Disciplina *, Disciplina *);
void check_mencao(char *);
void menu_filtrar_disciplinas(Aluno *);
void filtra(Aluno *, char *);
void relatorio_geral_aluno(Aluno *);
int get_aprovacoes(Aluno *);
int get_reprovacoes(Aluno *);
int get_trancamentos(Aluno *);

#endif