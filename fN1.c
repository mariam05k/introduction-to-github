#include <stdio.h>
void multable(int num){
    for(int i = 0; i <= 9; ++i){
      printf("%d x %d = %d\n",num, i, num * i);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    multable(num);
    
    return 0;
}
