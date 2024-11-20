#include <stdio.h>

void reverseSentence(char str[], int index) {
    if (str[index] == '\0') {
        return;
    }
    reverseSentence(str, index + 1);
    printf("%c", str[index]);
}

int main() {
    char message[100];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    reverseSentence(message, 0);
    return 0;
}
