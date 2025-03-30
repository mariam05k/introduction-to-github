
#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("%.1f\n", (float)arr[i] / 10);
    }
    return 0;
}
