#include <stdio.h>
 void swapByReference(int *a, int *b)
 {
 int temp = *a;
 *a = *b;
 *b = temp;
 }
 int main()
 {
 int x = 10, y = 20;
 printf("Before swapByReference function: x = %d, y = %d\n", x, y);
 swapByReference(&x, &y);
 printf("After swapByReference function: x = %d, y = %d\n", x, y);
 return 0;