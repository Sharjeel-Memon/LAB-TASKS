#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index, int length) {
    if (index < length / 2) {
        char temp = str[index];
        str[index] = str[length - index - 1];
        str[length - index - 1] = temp;
        reverseString(str, index + 1, length);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    reverseString(str, 0, length);
    printf("Reversed string: %s\n", str);
    return 0;
}

