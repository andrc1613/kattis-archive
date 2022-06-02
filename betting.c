#include <stdio.h>
#include <string.h>

int main() {
  int i;
  scanf("%d", &i);
  
  printf("%lf\n", 100.0/i);
  printf("%lf\n", 100.0/(100-i));

  return 0;
}