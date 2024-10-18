w	#include <stdio.h>

int main() {
    int arr[30], min, max, size;
    
    size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
    	printf("Enter your %d Element:",i+1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int j = 1; j < size; j++) {
        if (arr[j] < min) {
            min = arr[j];
        }
        if (arr[j] > max) {
            max = arr[j];
        }
    }

    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
}
