#include <stdio.h>

int main() 
{
 int num;
 printf("Enter your number(1-9): ");
 scanf("%d",&num);
 if (num >= 1 && num <= 9){
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", num, i, num * i);
    } 
 }
return 0;
}
