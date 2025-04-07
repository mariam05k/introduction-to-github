#include <stdio.h>
   int sumofdigits(int num){
      int sum = 0;
       for(int i = 0; i <= num; ++i){
           sum += num % 10;
           num /= 10;
       }
       return sum;
   }
   int main(){
       int num;
       printf("Enter a number: ");
       scanf("%d", &num);
       printf("Sum is = %d\n", sumofdigits(num));
    return 0;
}
