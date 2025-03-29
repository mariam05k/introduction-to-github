#include <stdio.h>

int main() {
    int arr[10];
    int max = arr[0];
    int maxindex = 0;
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
            maxindex = i;
            }
    }
    printf("The index of the maximum value is: %d\n", maxindex);
  return 0;
}
