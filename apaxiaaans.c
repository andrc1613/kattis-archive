#include <stdio.h>
#include <string.h>

int main() {
  char str[300];
  char cmp[300];
  memset(str, '\0', 300);
  memset(cmp, '\0', 300);
  scanf("%s", str);

  int size = strlen(str);
  
  cmp[0] = str[0];
  int i = 1, j = 1;
  while (i < size) {
    if (str[i] == str[i-1]) {
      i++; continue;
    }
    cmp[j] = str[i];
    i++; j++;
  }

  printf("%s\n", cmp);

  return 0;
}