#include <stdio.h>

int main() {
    double n1, n2, n3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Check which number is the largest
    if (n1 >= n2 && n1 >= n3) {
        printf("%.2lf is the largest number.\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf("%.2lf is the largest number.\n", n2);
    } else {
        printf("%.2lf is the largest number.\n", n3);
    }

    return 0;
}

