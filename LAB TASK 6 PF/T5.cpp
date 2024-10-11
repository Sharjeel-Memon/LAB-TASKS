#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                printf("%d is not a prime number.\n", number);
                return 0;
            }
        }
        printf("%d is a prime number.\n", number);
    }

    return 0;
}
