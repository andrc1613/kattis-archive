#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
  int k[13];
  memset(k, 0, 13 * sizeof(int));
  char hand[2];

  for (int i = 0; i < 5; i++) {
    scanf("%s", hand);
    if (hand[0] == 'A') k[0]++;
    else if (hand[0] == 'T') k[9]++;
    else if (hand[0] == 'J') k[10]++;
    else if (hand[0] == 'Q') k[11]++;
    else if (hand[0] == 'K') k[12]++;
    else k[atoi(&hand[0]) - 1]++;
  }

  int max = k[0];
  for (int i = 1; i < 13; i++) {
    if (max < k[i]) max = k[i];
  }

  printf("%d\n", max);

  return 0;
}