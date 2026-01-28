#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
    int dado;
    struct registro * prox;
} Celula;

void imprime (Celula *le) {
    for (Celula * p = le; p != NULL; p = p->prox)
        printf("%d\n", p->dado);
}

Celula * busca (int x, Celula *le) {
    Celula *p = le;

    while (p != NULL && p->dado != x)
        p = p->prox;

    return p;
}

Celula * busca_rec(int x, Celula *le) {
    if (le == NULL) return NULL;
    if (le->dado == x) return le;
    return busca_rec(x, le->prox);
}

int main() {
    Celula * le = NULL, p1, p2;

    p1.dado = 5;
    p1.prox = &p2;
    
    p2.dado = 10;
    p2.prox = NULL;
    
    le = &p1;
    
    Celula * resp = busca_rec(5, le);

    if(resp)
        printf("Valor encontrado: %d\n", resp->dado);
    else
        printf("Valor nao encontrado na lista!\n");

    return 0;
}