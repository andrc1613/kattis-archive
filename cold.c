#include <stdio.h>

int main() {
    int n, t, count = 0;

    scanf("%d", &n);

    for (int i = 0;i < n;i++) {
        scanf("%d", &t);
        if (t < 0) count++;
    }

    printf("%d\n", count);

    return 0;
}