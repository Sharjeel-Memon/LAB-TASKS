#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;

    printf("Enter your number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("The number should be positive.");
        return 1;
    }
    else if (number == 0) {
        printf("The factorial of 0 is: 1");
        return 1;
    }

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    printf("Factorial of the given number is: %lld", factorial);
    return 0;
}
