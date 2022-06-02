#include <stdio.h>
#include <stdlib.h>

int main () {
	char *a;
	a = (char*)malloc(1000*sizeof(char));

	scanf("%s", a);

	while(*a != 'a') {
		a = &a[1];
	}
	printf("%s\n", a);
	return 0;
}