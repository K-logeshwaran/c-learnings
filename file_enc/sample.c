#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int map(int value, int input_start, int input_end, int output_start, int output_end)
{
    double result = (double)(value - input_start) / (input_end - input_start) * (output_end - output_start) + output_start;
    return (int)round(result); // Proper rounding using round function
}

int getIndex(char string[], char *value, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (string[i] == *value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char key[] = "Deipundaengairukaaadnjsd8qw989uei1jijmjcuu8e09iqw9dkomkdj99u8u8";
    char text[] = "The quick brown fox jumps over the lazy dog. This sentence contains all 26 letters of the English alphabet. It is often used for handwriting practice and to demonstrate fonts in typography. The phrase has been used in various forms since the late 19th century.";
    int key_len = strlen(key);   // Calculate the length of the key
    int text_len = strlen(text); // Calculate the length of the text

    char *hash = (char *)malloc(sizeof(char) * (text_len + 1));         // Allocate memory for hash including null terminator
    char *reverse_hash = (char *)malloc(sizeof(char) * (text_len + 1)); // Allocate memory for reverse_hash including null terminator

    for (int i = 0; i < text_len; i++)
    {
        int mapped_value = map(text[i], 0, 127, 0, key_len);
        hash[i] = key[mapped_value];
    }
    hash[text_len] = '\0'; // Add null terminator to hash

    printf("Hash: %s\n", hash);

    for (int j = 0; j < text_len; j++)
    {
        int index = getIndex(key, &hash[j], key_len);
        int mapped_value2 = map(index, 0, key_len, 0, 127);
        reverse_hash[j] = (char)mapped_value2;
    }
    reverse_hash[text_len] = '\0'; // Add null terminator to reverse_hash

    printf("Reverse Hash: %s\n", reverse_hash);

    free(hash);         // Free dynamically allocated memory
    free(reverse_hash); // Free dynamically allocated memory

    return 0;
}
