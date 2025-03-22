#include <stdio.h>

int main() {
    int n;
    printf("Enter the index: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
    int next = a + b; 
               a = b; 
               b = next;  
    }
    if (n == 0) {
        printf("Fibonacci number at index 0: 0\n");
    } else {
        printf("Fibonacci number at index %d is %d\n", n, b);
    }

    return 0;
}
