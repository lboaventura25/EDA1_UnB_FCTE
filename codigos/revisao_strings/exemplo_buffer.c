#include <stdio.h>

int main() {
    int i;
    char str[100];

    scanf("%d", &i);
    printf("O int armazenado primeiro eh '%d'\n", i);
    
    scanf("%s", str);
    printf("A str armazenada segundo eh '%s'\n", str);
    return 0;
}