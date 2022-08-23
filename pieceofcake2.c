#include <stdio.h>

int main() {
  int n, h, v;
  scanf("%d %d %d", &n, &h, &v);

  int area[4];
  
  area[0] = h*v;
  int max = area[0];

  area[1] = (n-h)*(n-v);
  if (max < area[1]) max = area[1];

  area[2] = (n-h)*v;
  if (max < area[2]) max = area[2];

  area[3] = h*(n-v);
  if (max < area[3]) max = area[3];

  printf("%d\n", max*4);

  return 0;
}