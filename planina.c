#include <stdio.h>
#include <math.h>

double rec(int N) {
    if (N == 0) return 2;
    return pow(2, N-1) + rec(N-1);
}

int main() {
    int N;

    double dots;

    scanf("%d", &N);

    dots = pow(rec(N), 2);

    printf("%d\n", (int) dots);

    return 0;
}