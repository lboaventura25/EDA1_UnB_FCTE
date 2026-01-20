#include <stdio.h>

int main() {
    int i = 100;
    int * p;
    p = &i;
    
    printf("&i => %p\n&p => %p\n", &i, &p);
    printf("i = %d\np => %p\n", i, p);

    return 0;
}
