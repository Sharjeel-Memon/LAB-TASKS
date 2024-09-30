#include <stdio.h>

int main() {
    int age;
    char citizenship;

    printf("Enter your current age (age should be positive and greater than 0): ");
    scanf("%d", &age);
    
    printf("Enter your citizenship status (Press 'Y/y' for yes OR Press 'N/n' for no): ");
    scanf(" %c", &citizenship);
    
    if (age > 0 && (citizenship == 'Y' || citizenship == 'y' || citizenship == 'N' || citizenship == 'n')) {
        if (age >= 18 && (citizenship == 'Y' || citizenship == 'y')) {
            printf("You are eligible to vote.");
        } else {
            printf("You are not eligible to vote.");
        }
    } else {
        printf("Invalid Input.");
    }

    return 0;
}