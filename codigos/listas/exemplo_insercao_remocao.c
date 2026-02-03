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

void insere(int x, Celula *p) {
   Celula * nova;
   nova = malloc (sizeof (Celula));
   nova->dado = x;
   nova->prox = p->prox;
   p->prox = nova;
}

void remover(Celula *p) {
   Celula *lixo;
   lixo = p->prox;
   p->prox = lixo->prox;
   free (lixo);
}

void busca_e_remove (int y, Celula *le) {
   Celula *p, *q;
   p = le;
   q = le->prox;

   while (q != NULL && q->dado != y) {
      p = q;
      q = q->prox;
   }

   if (q != NULL) {
      p->prox = q->prox;
      free (q);
   }
}

Celula * busca_ultima(Celula * le) {
    // Opção com laço FOR
    // for(aux = le; aux->prox != NULL; aux = aux->prox)
    
    Celula * aux = le;
    while(aux->prox != NULL) aux = aux->prox;

    return aux;
}

int main() {
    Celula * le = cria_le();

    insere(5, le);
    insere(10, le);
    insere(15, le);
    insere(20, le);
    insere(66, busca_ultima(le));
    
    printf("\n------ IMPRESSAO APOS INSERCAO\n");
    imprime(le);

    // remover(le);
    // remover(le);
    // remover(le);
    busca_e_remove(15, le);
    
    printf("\n------ IMPRESSAO APOS REMOCAO\n");
    imprime(le);

    return 0;
}
