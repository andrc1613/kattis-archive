#include <stdio.h>

int main() {
    int N, t, count = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &t);
        
        if (i % 2 == 0) count -= t;
        else count += t;
    }

    if (N % 2 != 0) printf("still running\n");
    else printf("%d\n", count);

    return 0;
}