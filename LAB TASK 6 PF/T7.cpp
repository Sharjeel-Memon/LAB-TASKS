#include <stdio.h>

int main() {
    int number, original, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;

    while (number != 0) {
        remainder = number % 10;
        sum += remainder * remainder * remainder;
        number /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
