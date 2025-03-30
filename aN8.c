
#include <stdio.h>

int main() {
    int arr1[10];
    int mul = 1, i;
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr1[i]);
    }
   int arr2[10];
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < 10; i++){
    mul = arr1[i] * arr2[i];
    printf("The mul is %d\n", mul);
    }
    return 0;
}
