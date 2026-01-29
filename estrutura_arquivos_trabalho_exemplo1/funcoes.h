#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdio.h>
#include <stdlib.h>
#include "struct_func.h"

void main_trabalho();
void menu_inicial(int *);
int menu_cadastro(int *, int *);
funcionario * aloca_funcionario(funcionario *, int, int *, int *);
void check(funcionario **, int, int);
void le_struct(funcionario *, int);
void set_struct(funcionario *, int, int *);
void lista_funcionarios(funcionario *, int, int, int);
int menu_editar(funcionario *, int);
void edita_funcionario(funcionario *, int, int *);
void libera_espaco(funcionario *, int, int);
int menu_excluir(funcionario *, int);
void exclui_funcionario(funcionario *, int *, int, int *);
void edita_nome(char *, int);

#endif