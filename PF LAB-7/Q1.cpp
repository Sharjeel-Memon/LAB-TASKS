#include <stdio.h>

int main() {
    int n, search;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter integer to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d found at index %d\n", search, i);
            return 0;
        }
    }

    printf("Number not found\n");
    
    return 0;
}
