/* N7
#include <stdio.h>

int main() 
{
    float a, b;
    printf("Enter a = ");
    scanf("%f", &a);
    printf("Enter b = ");
    scanf("%f", &b);
    float result = a * b;
    printf("The result is: %.2f\n", result);
    return 0;
}
*/


/* N8
#include <stdio.h>

int main()
{
   float  Celsius, Fehrenheit;
   printf("Enter the temperature in Celsius: ");
   scanf("%f", &Celsius);
   Fehrenheit = (Celsius * 9/5) + 32;
   printf("The temperature in Fahrenheit is: %.2f\n", Fehrenheit);
    return 0;
}
*/


/* N9
#include <stdio.h>

int main()
{
   float  weight, height, BMI;
   printf("Enter your weight (kg): ");
   scanf("%f", &weight);
   printf("Enter your height (m): ");
   scanf("%f", &height);
   BMI = weight / (height * height);
   printf("Your BMI is:  %.2f\n", BMI);
   return 0;
}
*/


/* N10
#include <stdio.h>

int main()
{
   int  a, b, c, result;
   printf("Enter a = ");
   scanf("%d", &a);
   printf("Enter b = ");
   scanf("%d", &b);
   printf("Enter c = ");
   scanf("%d", &c);
   result = (a + b + c) / 2;
   printf("The result is: %d\n",result);
   return 0;
}
*/


/* N11
#include <stdio.h>

int main()
{
   int  hours, minutes;
   printf("Enter the number of hours: ");
   scanf("%d", &hours);
   minutes = hours * 60;
   printf("%d hours = %d minutes\n", hours, minutes);
   return 0;
}
*/


/* N12
#include <stdio.h>

int main()
{
   int age, days;
   printf("Enter your age: ");
   scanf("%d", &age);
   days = age * 365;
   printf("You are %d years old \n", days);
   return 0;
}
*/


/* N13
#include <stdio.h>

int main()
{
   char symbol;
   printf("Enter a character: ");
   scanf("%c", &symbol);
   printf("ASCII code of the character is:  %d\n", symbol);
   return 0;
}
*/


/* N14
#include <stdio.h>

int main()
{
   int number;
   printf("Enter your number: ");
   scanf("%u", &number);
   printf("You entered the number %u\n", number);
   return 0;
}
*/


/* N15
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %d\n", num1 / num2);
    return 0;
}
*/


/* N16
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Remainder: %d\n", num1 % num2);
    return 0;
}
*/
