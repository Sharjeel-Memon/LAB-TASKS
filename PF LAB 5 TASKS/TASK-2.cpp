#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    float sum;

    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);
    
    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);
    
    printf("Enter the third angle of the triangle: ");
    scanf("%f", &angle3);
    
    if (angle1 >= 0 && angle2 >= 0 && angle3 >= 0) {
        sum = angle1 + angle2 + angle3;
        if (sum == 180) {
            printf("The triangle is valid based on the angles given.");
        } else {
            printf("The triangle is not valid based on the angles given.");
        }
    } else {
        printf("Invalid Input. Angle must be positive and greater than or equal to 0.");
    }
    
    return 0;
}
