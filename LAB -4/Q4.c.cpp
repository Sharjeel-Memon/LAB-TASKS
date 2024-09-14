#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Positive integer greater than or equal to 1: ");
    scanf("%d", &n);

    if (n >= 1) {
        switch(n) {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            case 10:
                printf("Ten");
                break;
            case 11:
                printf("Eleven");
                break;
            case 12:
                printf("Twelve");
                break;
            case 13:
                printf("Thirteen");
                break;
            case 14:
                printf("Fourteen");
                break;
            case 15:
                printf("Fifteen");
                break;
            case 16:
                printf("Sixteen");
                break;
            case 17:
                printf("Seventeen");
                break;
            case 18:
                printf("Eighteen");
                break;
            case 19:
                printf("Nineteen");
                break;
            case 20:
                printf("Twenty");
                break;
            default:
                printf("Number is greater than 20.");
        }
    } 
	else {
        printf("Invalid Input. The Integer is Either Negative or Zero.");
    }
    
    return 0;
}