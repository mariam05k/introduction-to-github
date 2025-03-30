#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
   for (int i = 0; i < 10; i+=2){
       if(arr[i] != arr[i + 1]){
         printf("%d", arr[i]);
         return 0;
       }
   }
    return 0;
}
