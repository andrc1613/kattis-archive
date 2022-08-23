#include <stdio.h>

int main() {
  int G, S, C;
  scanf("%d %d %d", &G, &S, &C);

  int buyingPower = 3*G + 2*S + 1*C;

  if (buyingPower >= 8) printf("Province or ");
  else if (buyingPower >= 5) printf("Duchy or ");
  else if (buyingPower >= 2) printf("Estate or ");

  if (buyingPower >= 6) printf("Gold\n");
  else if (buyingPower >= 3) printf("Silver\n");
  else printf("Copper\n");

  return 0;
}