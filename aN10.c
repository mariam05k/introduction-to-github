#include <stdio.h>

int main() {
    int arr[10];
    float sum = 0;
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
   printf("%.2f", sum / 10);
    return 0;
}
