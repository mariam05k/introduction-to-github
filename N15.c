#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 2){
        printf("Cannot be less than 2 ");
        return 0;
    } else {
        int i;
        for(i = 2; i * i <= num; i++) {
        if(num % i == 0){
        printf("%d is not a prime\n", num);
            return 0;
            }
        }
        printf("%d is a prime\n", num);
        return 1;
    }
    return 0;
}
