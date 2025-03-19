int main() {
    int a;
    int b;
    int s = 0;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        if(i % 5 == 0)
        {
        s++;
        }
    }
       printf("%d\n", s);
   return 0;
}


