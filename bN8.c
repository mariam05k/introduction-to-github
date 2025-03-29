#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   if(num > 0 && (num & (num - 1)) == 0){
       printf("True\n");
   } else {
       printf("False\n");
   }
  return 0;
}
