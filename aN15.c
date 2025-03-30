
#include <stdio.h>

int main() {
    int arr[10];
    int j = 0;
    printf("Enter your numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
           int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            j++;
        }
    }
   for (int i = 0; i < 10; i++){
       printf("%d", arr[i]);
   }
    return 0;
}
