#include <stdio.h>

int facRec(int a) {
  if (a == 1) return a;
  else return (a * facRec(a - 1)) % 10;
}

int main() {
  int n;
  int a;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    printf("%d\n", facRec(a));
  }

  return 0;
}