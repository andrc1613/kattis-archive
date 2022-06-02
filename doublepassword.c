#include <stdio.h>

int main() {
  int a, b, c = 1;
  int digita, digitb;
  
  scanf("%d", &a);
  scanf("%d", &b);

  for (int i = 0; i < 4; i++) {
    digita = a % 10;
    a /= 10;
    digitb = b % 10;
    b /= 10;

    if (digita != digitb) c *= 2;
  }
  printf("%d\n", c);

  return 0;
}