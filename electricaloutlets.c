#include <stdio.h>

int main() {
  int N, K, p;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int sum = 0;
    scanf("%d", &K);
    for (int j = 0; j < K; j++) {
      scanf("%d", &p);
      if (j == K-1) {
        sum += p;
        continue;
      }
      sum += p - 1;
    }
    printf("%d\n", sum);
  }

  return 0;
}