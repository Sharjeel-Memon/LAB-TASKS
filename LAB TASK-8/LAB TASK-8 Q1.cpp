#include <stdio.h>

void participantsum(int arr[3][3]) {
    int participantTotal[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            participantTotal[i] += arr[i][j];
        }
        printf("Total Score of Participant %d is: %d \n", i + 1, participantTotal[i]);
    }
}

void activitysum(int arr[3][3]) {
    int activityTotal[3] = {0, 0, 0};
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            activityTotal[j] += arr[i][j];
        }
        printf("Total Score of Activity %d is: %d \n", j + 1, activityTotal[j]);
    }
}

int main() {
    int row = 3, column = 3;
    int score[3][3] = {0};

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Enter the score of Activity %d for Participant %d: ", j + 1, i + 1);
            scanf("%d", &score[i][j]);
        }
    }

    printf("\nEntered Scores:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    participantsum(score);
    activitysum(score);

    return 0;
}
