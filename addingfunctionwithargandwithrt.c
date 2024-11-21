#include <stdio.h> 
int add_numbers_with_args_with_return(int num1, int num2)
 {
 return num1 + num2;
 }
 int main()
 {
 int result = add_numbers_with_args_with_return(3, 5);
 printf("Sum: %d\n", result); 
return 0;
}