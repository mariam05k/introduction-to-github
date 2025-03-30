#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter your numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    int target = 0;
    printf("Enter your target: ");
    scanf("%d", &target);
    for (int i = 0; i < 10; i++){
        if(arr[i] == target){
        printf("Index is %d", i);
        return 0;
    }
    }
    printf("-1");
    return 0;
}
