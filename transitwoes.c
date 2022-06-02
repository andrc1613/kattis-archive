#include <stdio.h>

int main() {
  int s, t, n, i;
  scanf("%d %d %d", &s, &t, &n);
  int d[n+1], b[n], c[n];

  for (i = 0; i < n + 1; i++) {
    scanf("%d", &d[i]);
  }
  for (i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
  for (i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }

  for (int i = 0; i < n + 1; i++) {
    if (i == n) {
      s += d[i];
      if (s <= t) printf("yes\n");
      else printf("no\n");
      continue;
    }
    s += d[i];
    while (c[i] < s) c[i] += c[i];
    s += c[i] - s;
    s += b[i];

    if (s > t) {
      printf("no\n");
      break;
    }
  }

  return 0;
}