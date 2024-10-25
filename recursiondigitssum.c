#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) // Base case
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10); // Recursive case
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}