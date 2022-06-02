#include <stdio.h>

int main() {
    double C, w, l, sum = 0;
    int L;
    scanf("%lf", &C);
    scanf("%d", &L);

    for (int i = 0; i < L; i++) {
        scanf("%lf %lf", &w, &l);
        sum += w * l;
    }

    printf("%.8lf\n", sum * C);

    return 0;
}