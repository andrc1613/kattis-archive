#include <stdio.h>
#include <math.h>

int rec(int x, int i) {
  if (x < 10) return x;
  return (x % 10)*(int)pow(10, i) + rec(x / 10, i - 1);
}

int main() {
  int A, B, Arev, Brev;
  
  scanf("%d %d", &A, &B);
  Arev = rec(A, 2);
  Brev = rec(B, 2);
  
  printf("%d\n", Arev > Brev? Arev: Brev);

  return 0;
}