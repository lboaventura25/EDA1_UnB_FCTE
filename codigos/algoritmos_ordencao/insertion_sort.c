#include <stdio.h>

#define TAM 1000000

void insertionsort (int v[], int n) {
   for (int j = 1; j < n; ++j) {
        int x = v[j];
        int i;
        
        for (i = j-1; i >= 0 && v[i] > x; --i)
            v[i+1] = v[i];
        
        v[i+1] = x;
   }
}

int main() {

    int v1[TAM], j = 0;

    while(scanf("%d", &v1[j++]) != EOF);
    j--;

    for(int i = 0; i < j; i++) printf("%d ", v1[i]);
   
    printf("----------------------------------\n");
    insertionsort(v1, j);
    printf("\n\n-> Após ordenação com INSERTION SORT\n");
    for(int i = 0; i < j; i++) printf("%d ", v1[i]);

    return 0;
}
