#include <stdio.h>

int main() {
    double num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("You entered a positive number.\n");
    } else if (num < 0) {
        printf("You entered a negative number.\n");
    } else {
        printf("You entered zero.\n");
    }

    return 0;
}