#include <stdio.h>

void printPercentage(int num, int percent) {
    if (percent > 100) {
        return;
    }
    printf("%d%% of %d is %.2f\n", percent, num, (num * percent) / 100.0);
    printPercentage(num, percent + 1);
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printPercentage(num, 1);
    return 0;
}
