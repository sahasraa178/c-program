#include <stdio.h>
 int findMaximum(int a, int b, int c) 
{
 int max = a;
if (b > max) 
{
 max = b;
 }
 if (c > max) 
{
 max = c;
  }
 return max;
}
 int main()
 {
 int num1, num2, num3, maximum; 
 printf("Enter three numbers: ");
 scanf("%d %d %d", &num1, &num2, &num3); 
 maximum = findMaximum(num1, num2, num3); 
printf("The maximum of the three numbers is: %d\n", maximum); 
return 0;