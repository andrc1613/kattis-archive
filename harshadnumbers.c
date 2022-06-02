#include <stdio.h>

int rec(int n) {
    return n < 10 ? n : n % 10 + rec(n / 10);
}


int main() {
    int n, sum;

    scanf("%d", &n);
    
    sum = rec(n);
    
    while (n % sum != 0) {
        n++;
        sum = rec(n);
    }
    
    printf("%d\n", n);

    return 0;
}