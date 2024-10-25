#include <stdio.h>

int add() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

int main() {
    int sum = add();
    printf("Sum: %d\n", sum);
    return 0;
}