#include <stdio.h>

int main() {
    int A, I, bribe;

    scanf("%d %d", &A, &I);

    bribe = A * (I - 1) + 1;

    printf("%d", bribe);

    return 0;
}