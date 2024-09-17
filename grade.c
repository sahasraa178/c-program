#include <stdio.h>

int main() {
    double avgMarks;

    // Prompt the user to enter average marks
    printf("Enter average marks: ");
    scanf("%lf", &avgMarks);

    // Determine the grade based on average marks
    if (avgMarks > 80) {
        printf("Grade: A\n");
    } else if (avgMarks > 60 && avgMarks <= 80) {
        printf("Grade: B\n");
    } else if (avgMarks > 40 && avgMarks <= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}