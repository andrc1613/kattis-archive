#include <stdio.h>
#include <string.h>

int main() {
    char mon[3];
    int date;

    scanf("%s %d", mon, &date);

    int cond1 = strcmp(mon, "OCT") == 0 && date == 31;
    int cond2 = strcmp(mon, "DEC") == 0 && date == 25;

    if (cond1 || cond2) {
        printf("yup\n");
    } else {
        printf("nope\n");
    }

    return 0;
}