#include <stdio.h>
#include <string.h>

int recsum(int N) {
  if (N == 1) return N;
  return N + recsum(N-1);
}

int main() {
  int P, K, N;

  scanf("%d", &P);
  for (int i = 0; i < P; i++) {
    scanf("%d %d", &K, &N);
    printf("%d %d\n", K, recsum(N) + N);
  }

  return 0;
}