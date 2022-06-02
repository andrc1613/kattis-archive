#include <stdio.h>

char parseScore() {
    int a, b, c, d, e, score;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d", &score);
    if (score >= a) return 'A';
    if (score >= b) return 'B';
    if (score >= c) return 'C';
    if (score >= d) return 'D';
    if (score >= e) return 'E';
    return 'F';
}

int main() {

    printf("%c\n", parseScore());

    return 0;
}