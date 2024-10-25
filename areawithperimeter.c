#include <stdio.h>

int calculateArea(int side) {
    return side * side;
}

int calculatePerimeter(int side) {
    return 4 * side;
}

int main() {
    int side;
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    printf("Area of the square: %d\n", calculateArea(side));
    printf("Perimeter of the square: %d\n", calculatePerimeter(side));
    return 0;
}