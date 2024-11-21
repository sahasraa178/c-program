#include <stdio.h>
 int calculateArea(int side) 
{
 return side * side;
 }
 int calculatePerimeter(int side)
 {
 return 4 * side;
 }
 int main()
 { 
int side, area, perimeter; 
 printf("Enter the side length of the square: ");
 scanf("%d", &side); 
area = calculateArea(side);
 perimeter = calculatePerimeter(side);
  printf("Area of the square: %d\n", area); 
printf("Perimeter of the square: %d\n", perimeter);
 return 0;