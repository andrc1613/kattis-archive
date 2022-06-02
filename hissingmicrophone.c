#include <stdio.h>
#include <string.h>

int main() {
    char s[30];

    scanf("%s", s);

    int size = strlen(s);
    int i = 0;

    while (i < size - 1 && !(s[i] == 's' && s[i+1] == 's')) {
        i++;
    }

    if (i == size - 1) printf("no hiss\n");
    else printf("hiss\n");

    return 0;
}