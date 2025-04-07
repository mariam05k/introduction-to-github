#include <stdio.h>
long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Can't be -։\n");
    } else {
        printf("%d! = %lld\n", num, factorial(num));
    }
    return 0;
}
