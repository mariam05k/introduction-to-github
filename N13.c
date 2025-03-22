#include <stdio.h>
int main(){
    int num, reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    int original = num;
    while(num != 0) {
    int remainder = num % 10; 
    reversed = reversed * 10 + remainder; 
    num /= 10;
    }
    if (original == reversed){
        printf("Is palindrome\n");
    } else{
        printf("Is not palindrome\n");
    }
    return 0;
    
}


