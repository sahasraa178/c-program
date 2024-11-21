#include <stdio.h>
 void add_numbers_with_args_no_return(int num1, int num2)
 { 
int sum = num1 + num2; printf("Sum: %d\n", sum);
 }
 int main()
 {
 add_numbers_with_args_no_return(3, 5);
 return 0; 
}