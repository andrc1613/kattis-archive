#include <stdio.h>

int main() {
    int G, T, N, w, sum = 0;

    scanf("%d %d %d", &G, &T, &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &w);
        sum += w;
    }

    int trailer = 9*(G - T)/10 - sum;
    printf("%d\n", trailer);

    return 0;
}