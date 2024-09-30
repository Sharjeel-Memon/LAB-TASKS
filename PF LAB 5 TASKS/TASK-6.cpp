#include <stdio.h>

int main() {
    int X;
    printf("Enter an 8-bit number (0-255): ");
    scanf("%d", &X);
	if (X < 0 || X > 255) {
        printf("Please enter a valid 8-bit number (0-255).");
        return 1;
    }
    int count;
    count = (X & 1) +
                ((X >> 1) & 1) +
                ((X >> 2) & 1) +
                ((X >> 3) & 1) +
                ((X >> 4) & 1) +
                ((X >> 5) & 1) +
                ((X >> 6) & 1) +
                ((X >> 7) & 1);
    printf("The number of 1s in the binary representation of %d is: %d", X, count);
    
    return 0;
}