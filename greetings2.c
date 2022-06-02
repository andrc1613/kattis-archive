#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s1[1000];

    scanf("%s", s1);
    int e_sz = strlen(s1) - 2;

    printf("h");
    for (int i = 0; i < 2*e_sz; i++) {
        printf("e");
    }
    printf("y\n");
    
    

    return 0;
}