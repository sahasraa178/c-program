#include <stdio.h> 
 void printAbsoluteValue(int x)
 {
 if (x < 0) 
{
 x = -x;
}
 printf("The absolute value is: %d\n", x);
 }
 int main() 
{
 int number; 
 printf("Enter an integer: "); 
scanf("%d", &number);
 printAbsoluteValue(number); 
return 0;