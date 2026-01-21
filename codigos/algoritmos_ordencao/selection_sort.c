#include <stdio.h>

void selectionsort(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (v[j] < v[min])
                min = j;
        }
        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }
}

int main() {

    int v1[10] = { 25, 65, 4, 8, -5, -25, 9, 94, 1000, 526};

    for(int i = 0; i < 10; i++) printf("%d ", v1[i]);
    
    selectionsort(v1, 10);
    printf("\n\n-> Após ordenação com SELECTION SORT\n");
    for(int i = 0; i < 10; i++) printf("%d ", v1[i]);

    return 0;
}
