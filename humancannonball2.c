#include <stdio.h>
#include <math.h>

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    float v0, th, x, h1, h2;
    scanf("%f %f %f %f %f", &v0, &th, &x, &h1, &h2);

    th = th * M_PI / 180;
    
    float t = x / (v0 * cos(th));
    float h = v0 * t * sin(th) - 9.81 * pow(t, 2) / 2;

    if (h > h1 + 1 && h < h2 - 1) printf("Safe\n");
    else printf("Not Safe\n");
  }

  return 0;
}