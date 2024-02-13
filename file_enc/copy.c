#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to encode the plaintext using Caesar Cipher
char* encode(char* plaintext, int key) {
    int len = strlen(plaintext);
    char* ciphertext = (char*)malloc(len + 1); // Allocate memory for ciphertext including null terminator
    
    for (int i = 0; i < len; i++) {
        // Shift each character by the key value
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
            ciphertext[i] = 'a' + (plaintext[i] - 'a' + key) % 26;
        } else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
            ciphertext[i] = 'A' + (plaintext[i] - 'A' + key) % 26;
        } else {
            ciphertext[i] = plaintext[i]; // Preserve non-alphabetic characters
        }
    }
    
    ciphertext[len] = '\0'; // Add null terminator to ciphertext
    return ciphertext;
}

// Function to decode the ciphertext using Caesar Cipher
char* decode(char* ciphertext, int key) {
    // Decoding is the same as encoding with negative key
    return encode(ciphertext, -key);
}

int main() {
    char plaintext[] = "The quick brown fox jumps over the lazy dog. This sentence contains all 26 letters of the English alphabet. It is often used for handwriting practice and to demonstrate fonts in typography. The phrase has been used in various forms since the late 19th century.";
    int key = 14; // Key value for encoding
    
    // Encode the plaintext
    char* encoded_text = encode(plaintext, key);
    printf("Encoded text: %s\n", encoded_text);
    
    // Decode the ciphertext
    char* decoded_text = decode(encoded_text, key);
    printf("Decoded text: %s\n", decoded_text);
    
    // Free dynamically allocated memory
    free(encoded_text);
    free(decoded_text);
    
    return 0;
}
