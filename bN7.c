#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the index: ");
    scanf("%d", &n);
    num |= (1 << n);
    printf("%d",num);
  return 0;
}
