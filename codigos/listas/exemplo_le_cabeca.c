#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
    int dado;
    struct registro * prox;
} Celula;

void imprime (Celula *le) {
    Celula *p;
    for (p = le->prox; p != NULL; p = p->prox)
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

Celula * cria_le() {
    Celula * le;
    le = malloc(sizeof(Celula));
    le->prox = NULL;

    return le;
}

int main() {
    Celula * le = cria_le(), p1, p2;

    p1.dado = 5;
    p1.prox = &p2;
    le->prox = &p1;
    
    p2.dado = 10;
    p2.prox = NULL;
    
    imprime(le);

    return 0;
}
