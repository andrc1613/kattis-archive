#include <stdio.h>
#include <string.h>

int main() {
    char s[256];
    int can = 1;

    scanf("%s", s);
    int size = strlen(s);
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (s[i] == s[j]) {
                can = 0;
                break;
            }
        }
        if (!can) break;
    }

    printf("%d\n", can);
    return 0;
}