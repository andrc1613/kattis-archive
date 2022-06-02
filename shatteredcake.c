#include <stdio.h>

int main() {
  int W, L, N, w, l, sum = 0;

  scanf("%d", &W);
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &w, &l);
    sum += w * l;
  }
  L = sum / W;
  printf("%d\n", L);

  return 0;
}