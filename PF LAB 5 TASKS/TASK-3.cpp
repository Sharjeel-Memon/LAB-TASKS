#include <stdio.h>

int main() {
    int percentage;
    printf("Enter your percentage: ");
    scanf("%d", &percentage);
    (percentage >= 90) ? printf("Grade A.") : (percentage >= 80 && percentage <= 89) ? printf("Grade B.") : (percentage >= 70 && percentage <= 79) ? printf("Grade C.") : (percentage >= 60 && percentage <= 69) ? printf("Grade D.") : (percentage >= 0 && percentage < 60) ? printf("Grade F.") : (percentage < 0) ? printf("Invalid Input. Grades can't be negative.") :printf("Invalid Input.");
    return 0;
}
