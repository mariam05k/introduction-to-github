
#include <stdio.h>

int main() {
    int arr[10];
    int min, max, sum = 0;
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        }
      min = max = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] < min){
            min = arr[i];
            }
        if(arr[i] > max){
            max = arr[i];
            }
    }
   sum = min + max;
   printf("The sum of %d and %d is %d\n", min, max, sum);
  return 0;
}
