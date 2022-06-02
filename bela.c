#include <stdio.h>

int main() {
  int N;
  char B;
  char suit[2];
  int sum = 0;

  scanf("%d %c", &N, &B);
  for (int i = 0; i < 4*N; i++) {
    scanf("%s", suit);
    if (suit[1] == B) {
      switch (suit[0]) {
        case 'A':
          sum += 11;
          break;
        case 'K':
          sum += 4;
          break;
        case 'Q':
          sum += 3;
          break;
        case 'J':
          sum += 20;
          break;
        case 'T':
          sum += 10;
          break;
        case '9':
          sum += 14;
          break;
        case '8':
          sum += 0;
          break;
        case '7':
          sum += 0;
          break;
        default:
          break;
      }
    } else {
      switch (suit[0]) {
        case 'A':
          sum += 11;
          break;
        case 'K':
          sum += 4;
          break;
        case 'Q':
          sum += 3;
          break;
        case 'J':
          sum += 2;
          break;
        case 'T':
          sum += 10;
          break;
        case '9':
          sum += 0;
          break;
        case '8':
          sum += 0;
          break;
        case '7':
          sum += 0;
          break;
        default:
          break;
      }
    }
  }

  printf("%d\n", sum);

  return 0;
}