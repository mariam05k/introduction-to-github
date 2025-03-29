#include <stdio.h>

int main() {
    int num, i, j;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the i index: ");
    scanf("%d", &i);
    printf("Enter the j index: ");
    scanf("%d", &j);
    if (((num >> i) & 1)!= ((num >> j) & 1)){
        num ^= (1 << i);
        num ^= (1 << j);
    }
    printf("%d", num);
  return 0;
}
