#include <stdio.h>

int main() {
  int n, a, sum = 0, import = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    
    sum = a;
    scanf("%d", &a);
    while (a != 0) {      
      if (a > 2 * sum) import += a - 2 * sum;
      sum = a;
      scanf("%d", &a);
    }  
    printf("%d\n", import);
    import = 0;
  }

  return 0;
}