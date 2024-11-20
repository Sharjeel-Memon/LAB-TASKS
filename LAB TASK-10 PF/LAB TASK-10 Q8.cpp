#include <stdio.h>

void displayArray(int arr[], int size, int index) {
    if (index == size) {
        return;
    }
    printf("%d ", arr[index]);
    displayArray(arr, size, index + 1);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    displayArray(arr, n, 0);
    printf("\n");

    return 0;
}
