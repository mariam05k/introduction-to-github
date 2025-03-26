#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int current_num = 1;
      for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", current_num); 
            current_num++;
        }
        printf("\n");  
    }
    
    return 0;
}
