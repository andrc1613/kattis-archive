#include <stdio.h>
#include <math.h>

int main() {
  int n;
  scanf("%d", &n);
  int m = n;

  int bin[32];
  // memset(bin, -1, 32);

  int i = 0;
  while (m > 1) {
    bin[i] = m % 2;
    m /= 2;
    i++;
  }
  bin[i] = m % 2;
  
  int sum = 0;

  int base = 0;
  while (pow(2, base) <= n) base++;
  base--;

  i = 0;
  while (base >= 0) {
    sum += bin[i] * (int) pow(2, base);
    i++;
    base--;
  }

  printf("%d\n", sum);
  

  return 0;
}