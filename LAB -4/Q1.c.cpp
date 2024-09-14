#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if(score <= 100 && score >= 0) {
        if (score >= 90 && score <= 100) {
            printf("The grade is A.");
        }
        else if(score >= 80 && score <= 89) {
            printf("The grade is B.");
        }
        else if(score >= 70 && score <= 79) {
            printf("The grade is C.");
        }
        else if(score >= 60 && score <= 69) {
            printf("The grade is D.");
        }
        else if(score < 60) {
            printf("The grade is F.");
        }
    }
    else {
        printf("Error. Score should be between 0 and 100.");
    }
    return 0;
}