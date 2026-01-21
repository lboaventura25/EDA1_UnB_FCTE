#include <stdio.h>

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

    int v1[10] = { 25, 65, 4, 8, -5, -25, 9, 94, 1000, 526};

    for(int i = 0; i < 10; i++) printf("%d ", v1[i]);
    
    insertionsort(v1, 10);
    printf("\n\n-> Após ordenação com INSERTION SORT\n");
    for(int i = 0; i < 10; i++) printf("%d ", v1[i]);

    return 0;
}
