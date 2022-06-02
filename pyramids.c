#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int i = 1;
  int sum = 0;
  sum += (2*i-1)*(2*i-1);
  while (sum <= n) {
    i++;
    sum += (2*i-1)*(2*i-1);
  }

  printf("%d\n", i-1);

  return 0;
}