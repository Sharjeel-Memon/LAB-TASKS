#include <stdio.h>

int main() {
    int matrix[4][4];
    printf("Enter the elements of a 4x4 matrix (team scores for 3 rounds):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int k = 0; k < 4; k++) {
        for (int i = 0; i < 4 - 1; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (matrix[i][k] > matrix[j][k]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[j][k];
                    matrix[j][k] = temp;
                }
            }
        }
    }
    printf("Matrix after sorting each column in ascending order:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
