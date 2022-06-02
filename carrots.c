#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, P;

    scanf("%d %d", &N, &P);

    for (int i = 0; i < N; i++) {
        char name[256];
        scanf("%s", name);
    }

    printf("%d\n", P);
    return 0;
}