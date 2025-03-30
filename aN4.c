
#include <stdio.h>

int main() {
    int arr[10];
    int min = arr[0];
    int minindex = 0;
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
         if(i == 0){
            min = arr[0];
        }
        if(arr[i] < min){
            min = arr[i];
            minindex = i;
            }
    }
    printf("The index of the minimum value is: %d\n", minindex);
  return 0;
}
