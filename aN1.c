#include <stdio.h>

int main() {
    int arr[10];
    int max;
    max = arr[0];
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            }
    }
    printf("The maximum value is: %d\n", max);
  return 0;
}

