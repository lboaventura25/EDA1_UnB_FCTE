#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
    int dado;
    struct registro * prox;
} Celula;

int main() {
    Celula * le = NULL, p1, p2;

    p1.dado = 5;
    p1.prox = &p2;
    
    p2.dado = 10;
    p2.prox = NULL;
    
    le = &p1;
    while(le) {
        printf("Dado = %d\n", le->dado);
        le = le->prox;
    }

    printf ("sizeof (celula) = %ld\n", sizeof(Celula));

    return 0;
}