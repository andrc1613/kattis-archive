#include <stdio.h>

int main() {
    int X, Y, N;

    scanf("%d %d %d", &X, &Y, &N);

    for (int i = 1; i <= N; i++) {
        int condX = i % X == 0;
        int condY = i % Y == 0;
        if (condX) printf("Fizz");
        if (condY) printf("Buzz");

        if (condX || condY) printf("\n");
        else printf("%d\n", i);
    }

    return 0;
}