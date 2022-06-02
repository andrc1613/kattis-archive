#include <stdio.h>
#include <math.h>

int main() {
    int N, P;

    double X = 0;

    scanf("%d", &N);

    for (int i = 0; i < N ; i++) {
        scanf("%d", &P);
        X += pow(P/10, P%10);
    }

    printf("%d", X);

    return 0;
}