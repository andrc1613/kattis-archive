#include <stdio.h>
#include <string.h>

int main() {
  char smil[2048];
  scanf("%s", smil);

  int smilc = 0;
  
  int n = strlen(smil);
  int smilidx;

  for (int i = 0; i < n; i++) {
    if (smil[i] == ':' || smil[i] == ';') {
      smilidx = i;
      smilc = 1; continue;
    }
    if (smilc && smil[i] == ')') {
      printf("%d\n", smilidx); 
      smilc = 0;
      continue;
    }
    if (smilc && smil[i] == '-') {
      continue;
    }
    smilc = 0;
  }

  return 0;
}