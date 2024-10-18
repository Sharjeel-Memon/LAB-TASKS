#include <stdio.h>

int main() {
    int arr[20], size;
    
    size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
    	printf("Enter the %d Element:",i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = size - 1; j >= 0; j--) {
        printf("%d ", arr[j]);
    }

    return 0;
}