
#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter your numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
   for (int i = 0; i < 9; i++){
       if(arr[i] < arr[i + 1]){
           printf("No");
           return 0;
       }
   }
   printf("Yes");
    return 0;
}
