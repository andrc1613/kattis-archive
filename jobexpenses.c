#include <stdio.h>

int main() {
    int N, e, sum = 0;

    scanf("%d", &N);

    for (int i = 0;i < N;i++) {
        scanf("%d", &e);
        if (e < 0) sum -= e;
    }

    printf("%d\n", sum);

    return 0;
}