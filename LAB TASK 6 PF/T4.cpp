#include <stdio.h>

int main() {
    int number, sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
        if (number != 0) {
            printf("Current sum: %d\n", sum);
        }
    } while (number != 0);

    printf("Final sum: %d\n", sum);
    return 0;
}