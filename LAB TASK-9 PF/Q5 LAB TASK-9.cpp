#include <stdio.h>
#include <string.h>

int main() {
    char plaintext[100], key[100], ciphertext[100];
    int len_plaintext, len_key;

    printf("Enter the plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = '\0';

    printf("Enter the key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    len_plaintext = strlen(plaintext);
    len_key = strlen(key);

    for (int i = 0; i < len_plaintext; i++) {
        if (plaintext[i] == ' ') {
            ciphertext[i] = ' ';
        } else {
            int plain_text_val = plaintext[i] - 64;
            int key_val = key[i % len_key] - 64;
            int cipher_val = (plain_text_val + key_val) % 26;
            if (cipher_val == 0) cipher_val = 26;
            ciphertext[i] = cipher_val + 64;
        }
    }
    ciphertext[len_plaintext] = '\0';

    printf("Cipher text: %s\n", ciphertext);

    return 0;
}
