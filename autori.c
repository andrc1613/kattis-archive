#include <stdio.h>
#include <string.h>

int main()
{
	char a[256];

	scanf("%s", a);

	int size = strlen(a);

	for (int i = 0; i < size; i++) {
		if (a[i] >= 65 && a[i] <= 90) printf("%c", a[i]);
	}
	printf("\n");

	return 0;
}