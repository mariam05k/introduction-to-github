#include <stdio.h>

int main() {
    int num, secret = 33;
    while(1){
    printf("Enter your number (q to quit): ");
    if (scanf("%d", &num) == 1){
    if(num == secret){
      printf("Congrets, you won!\n");
      break;
    } else if(num < secret){
        printf("Too low\n");
    } else {
        printf("Too high\n");
    }
    } else { 
        char ch = getchar();
        if (ch == 'q') {
            printf("You quit the game\n");
            break; 
        }
            }
    }
    return 0;
}
