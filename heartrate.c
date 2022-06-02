#include <stdio.h>
#include <string.h>

int main() {
  int N, B;
  float P;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %f", &B, &P);
    printf("%f %f %f\n", 60*(B-1)/P, 60*B/P, 60*(B+1)/P);
  }
  
  return 0;
}