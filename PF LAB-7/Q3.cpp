#include <stdio.h>

int main() {
    int arr[12];
    int result[6];

    for (int i = 0; i < 12; i++) {
        printf("Enter the %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0, k = 0; j < 12; j += 2, k++) {
        result[k] = arr[j] + arr[j + 1];
    }

    printf("Result of elements = ");
    for (int l = 0; l < 6; l++) {
        printf("%d ", result[l]);
    }
    
    return 0;
}
