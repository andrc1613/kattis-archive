#include <stdio.h>

int main() {
    int N, x, sum = 0;
    scanf("%d",&N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf("%d\n", sum);

    return 0;
}