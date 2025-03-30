#include <stdio.h>

int main() {
    int arr[10], num, i;
    printf("Enter your numbers: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 number: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++){
    if(arr[i] == num){
       printf("Yes");
       return 0;
    } 
    }
     printf("No");
    return 0;
}
