
#include <stdio.h>

int main() {
    int arr1[10], i;
    printf("Enter arr1 numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr1[i]);
    }
    int arr2[10];
    printf("Enter arr2 numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr2[i]);
    }
    if(arr1[i] == arr2[i]){
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
