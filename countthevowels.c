#include <stdio.h>
#include <string.h>

int check(char c) {
  switch (c)
  {
  case 'A':
    return 1;
  case 'I':
    return 1;
  case 'U':
    return 1;
  case 'E':
    return 1;
  case 'O':
    return 1;
  case 'a':
    return 1;
  case 'i':
    return 1;
  case 'u':
    return 1;
  case 'e':
    return 1;
  case 'o':
    return 1;
  default:
    return 0;
  }
}

int main() {
  char sentence[100];
  scanf("%[^\n]", sentence);
  int size = strlen(sentence);
  
  int count = 0;

  for (int i = 0; i < size; i++) {
    if (check(sentence[i])) count++;
  }

  printf("%d\n", count);
  
  return 0;
}