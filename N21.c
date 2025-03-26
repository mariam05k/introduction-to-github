
#include <stdio.h>

int main() {
    int h;
    printf("Enter the height of Floyd's Triangle: ");
    scanf("%d", &h);
      for (int i = 1; i <= h; i++){
        for (int j = 1; j <= i; j++){
            if((i + j) % 2 ==0){
                printf("1");
            } else {
                printf("0");
            }
        } 
        printf("\n");  
    }
    
    return 0;
}
