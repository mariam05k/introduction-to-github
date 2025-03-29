#include <stdio.h>

int main() {
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);
    ch ^= 32;
    printf("%c",ch);
  return 0;
}
