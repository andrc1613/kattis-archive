#include <stdio.h>

int main() {
    int A, B, i;
    scanf("%d %d", &A, &B);
    
    int m, n;
    if (A <= B) {
        m = A;
        n = B;
    } else {
        m = B;
        n = A;
    }
    for (i = m + 1; i <= n + 1; i++) {
        printf("%d\n", i);
    } 
    return 0;
}