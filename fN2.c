#include <stdio.h>
void multable(int num){
    for(int i = 1; i <= 10; ++i){
        printf("%d x %d = %d\n",num, i, num * i);
    }
}
int main(){
    for(int num = 1; num <= 10; ++num){
        printf("%d mul table\n", num);
    multable(num);
 }              
    return 0;
}
