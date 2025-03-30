#include <stdio.h>

int main() {
    int arr[9];
    int sum1 = 0;
    int sum2 = 0;
    printf("Enter your numbers: ");
    for (int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
        sum1 += arr[i];
    }
    for (int i = 1; i <= 10; i++){
      sum2 += i;
    }
    printf("The missing number is: %d\n", sum2 - sum1 );
    return 0;
}
