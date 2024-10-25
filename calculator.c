#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Division by zero error!\n");
        return 0;
    }
}

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Choose an operation: 1. Add 2. Subtract 3. Multiply 4. Divide\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case 4:
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}