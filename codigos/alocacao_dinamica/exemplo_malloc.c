#include <stdio.h>
#include <stdlib.h>

int main() {
    int * ptr;

    ptr = malloc(4 * sizeof(int));
    ptr[0] = 100;
    ptr[1] = 200;
    *(ptr + 2) = 300;
    *(ptr + 3) = 400;

    // for(int i = 0; i < 4; i++)
    //     printf("End. memoria => %p | ptr[%d] => '%d'\n", ptr + i, i, *(ptr + i));

    int i = 0;
    while(1) {
        printf("End. memoria => %p | => '%d'\n", ptr, *ptr);
        ptr++;
        i++;

        if (i == 4) break;
    }

    free(ptr);

    return 0;
}
