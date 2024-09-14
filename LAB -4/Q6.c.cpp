#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter the First Number: ");
    scanf("%d", &num1);
    
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        if (num1 > 100) {
            printf("First Number is Significantly Larger.");
        }
        else {
            printf("First Number is Larger.");
        }
    }
    else if (num1 < num2) {
        if (num1 < 0) {
            printf("First Number is Negative and Smaller.");
        }
        else {
            printf("First Number is Smaller.");
        }
    }
    else {
        printf("Both Numbers are equal.");
    }

    return 0;
}