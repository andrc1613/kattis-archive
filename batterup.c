#include <stdio.h>

int main() {
  int n, b;
  scanf("%d", &n);
  int sum = 0; 
  float count = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &b);
    if (b == -1) continue;
    sum += b;
    count++;
  }

  printf("%f\n", sum/count);

  return 0;
}