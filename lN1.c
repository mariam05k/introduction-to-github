#include <stdio.h>

int mySqrt(int x) {
    int i = 0;
    while (i * i <= x){
        i++;
    }
    return i - 1;
}
    int main(){
        int x;
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x < 0){
            printf("Cannot be negative number");
        } else {
            printf("The square root of %d is %d\n", x, mySqrt(x));
        }
            return 0;
    }
