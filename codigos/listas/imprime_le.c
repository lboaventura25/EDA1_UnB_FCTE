#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
    int dado;
    struct registro * prox;
} Celula;

void imprime_rec(Celula * le) {
    if (le != NULL) {
        printf("%d\n", le->dado);
        imprime_rec(le->prox);
    }
}

void imprime (Celula *le) {
    for (Celula * p = le; p != NULL; p = p->prox)
        printf("%d\n", p->dado);
}

int main() {
    Celula * le = NULL, p1, p2;

    p1.dado = 5;
    p1.prox = &p2;
    
    p2.dado = 10;
    p2.prox = NULL;
    
    le = &p1;
    printf("\n-------------- IMPRESSÃO ITERATIVA\n");
    imprime(le);

    printf("\n-------------- IMPRESSÃO RECURSIVA\n");
    imprime_rec(le);

    return 0;
}