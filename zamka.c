#include <stdio.h>

int digitSum(int x) {
  if (x < 10) return x;
  return x % 10 + digitSum(x / 10);
}


int main() {
  int L, D, X;
  scanf("%d", &L);
  scanf("%d", &D);
  scanf("%d", &X);
  
  int i;
  i = L;
  while (digitSum(i) != X) i++;
  printf("%d\n", i);

  i = D;
  while (digitSum(i) != X) i--;
  printf("%d\n", i);  

  return 0;
}