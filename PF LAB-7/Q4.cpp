#include <stdio.h>

int main() {
    int arr[15], size, sum = 0;
    
    size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
    	printf("Enter the %d Element:",i+1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < size; j++) {
        sum += arr[j];
    }

    printf("Sum of elements = %d\n", sum);

    return 0;
}
