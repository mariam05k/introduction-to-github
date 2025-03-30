
#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int mul = 1;
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        mul *= arr[i];
    }
  printf("The sum is %d\n", sum);
  printf("The mul is %d\n", mul);
  return 0;
}
