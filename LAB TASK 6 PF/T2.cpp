#include <stdio.h>
int main() {
    int number, i = 0;
    printf("Enter your number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("There is no even number in the given range.");
        return 1;
    }

    if (number % 2 != 0) {
        number--;
    }

    while (i <= number) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}
