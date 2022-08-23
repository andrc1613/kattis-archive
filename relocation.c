#include <stdio.h>

int main() {
  int N, Q, i;
  scanf("%d %d", &N, &Q);
  
  int loc[N];
  for (i = 0; i < N; i++) {
    scanf("%d", &loc[i]);
  }

  int o, o1, o2;

  for (i = 0; i < Q; i++) {
    scanf("%d %d %d", &o, &o1, &o2);
    if (o == 1) loc[o1-1] = o2;
    else printf("%d\n", loc[o1-1] > loc[o2-1]? loc[o1-1] - loc[o2-1]: -(loc[o1-1] - loc[o2-1]));
  }

  return 0;
}