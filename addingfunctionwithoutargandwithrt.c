#include <stdio.h> 
int add_numbers_no_args_with_return()
 {
 int num1 = 3;
 int num2 = 5; 
return num1 + num2; 
}
 int main() 
{
 int result = add_numbers_no_args_with_return(); 
printf("Sum: %d\n", result);
 return 0;