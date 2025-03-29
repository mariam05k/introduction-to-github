#include <stdio.h>

int main() {
    int num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
   while(num != 0){
       if((num & 1) == 1){
           count++;
       }
       num >>= 1;
   }
   if((count & 1) == 0){
       printf("The number of 1-bits is even");
   } else {
      printf("The number of 1-bits is odd"); 
   }
   return 0;
}
