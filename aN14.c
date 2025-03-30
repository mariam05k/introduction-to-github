
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int i;
    for(i = 0; str[i] != '\0'; i++){
    }
    for( i = i - 1; i >= 0; i--){
      printf("%c", str[i]);
    }
     printf("\n");
    return 0;
}
