#include <stdio.h>
#include <string.h>

int main() {
  char tower[100];
  int i = 0;
  int size;
  int left, right;

  scanf("%s", tower);
  size = strlen(tower);
  
  while (i < size && tower[i] != '(') i++;
  left = i;
  right = size - i - 2;
  if (left == right) printf("correct\n");
  else printf("fix\n");

  return 0;
}