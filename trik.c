#include <stdio.h>
#include <string.h>

int main() {
  char abc[50];
  scanf("%s", abc);
  int L = 1, M = 0, R = 0;

  int size = strlen(abc);
  for (int i = 0; i < size; i++) {
    int temp;
    if (abc[i] == 'A') {
      temp = L;
      L = M;
      M = temp;
    } else if (abc[i] == 'B') {
      temp = M;
      M = R;
      R = temp;
    } else if (abc[i] == 'C') {
      temp = L;
      L = R;
      R = temp;
    }
  }

  if (L) printf("1\n");
  if (M) printf("2\n");
  if (R) printf("3\n");

  return 0;
}