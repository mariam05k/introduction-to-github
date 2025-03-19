#include <stdio.h>

int main() {
    int i;
    printf("While cycle,10-0:\n");
    i = 0;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    printf("While cycle,0-10:\n");
    i = 10;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    printf("\n");
    
    printf("Do... while, 10-0:\n"); 
    i = 0;
    do
    {
       printf("%d ", i); 
       i++;
    }
    while (i <= 10); 
    printf("\n");
    printf("Do... while, 0-10:\n"); 
    i = 10;
    do {
         printf("%d ", i); 
       i--;
    }
    while (i >= 0); 
    
    printf("\n");
    printf("For, 10-0:\n"); 
    for(i=0; i<=10; i++)
    {
        printf("%d ", i);   
    }
     printf("\n");
     printf("For, 10-0:\n");
     for(i=10; i>=0; i--)
     {
        printf("%d ", i);   
    }
    return 0;
}
