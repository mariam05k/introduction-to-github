#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) 
    return false;
    int reversed = 0;
    int temp = x;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return x == reversed;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%s\n", isPalindrome(x) ? "true" : "false");
    return 0;
}
