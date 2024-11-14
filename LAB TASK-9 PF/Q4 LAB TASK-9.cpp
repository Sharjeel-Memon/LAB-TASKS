#include <stdio.h>
#include <string.h>

int main() {
    char students[5][20] = {"Alice", "Harry", "Charlie", "Diana", "Eve"};
    char name[20];
    
    printf("Enter a name to search: ");
    scanf("%s", name);

    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i], name) == 0) {
            printf("Found\n");
            return 0; 
        }
    }

    printf("Not Found\n");
    return 0;
}

