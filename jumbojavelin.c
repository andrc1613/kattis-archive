#include <stdio.h>

int main() {
    int N, l, sum = 1;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &l);
        sum += l - 1;
    }

    printf("%d\n", sum);

    return 0;
}