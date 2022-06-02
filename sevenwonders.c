#include <stdio.h>
#include <string.h>

int min(int t, int c, int g) {
  return t < c? t < g? t: g: c < g? c: g;
}

int main() {
  char tcg[51];
  memset(tcg, '\0', 51);

  scanf("%s", tcg);

  int T = 0, C = 0, G = 0;
  int i = 0;
  while (tcg[i] != '\0') {
    if (tcg[i] == 'T') T++;
    if (tcg[i] == 'C') C++;
    if (tcg[i] == 'G') G++;
    i++;
  }

  int score = T*T + C*C + G*G + 7*min(T,C,G);
  printf("%d\n", score);

  return 0;
}