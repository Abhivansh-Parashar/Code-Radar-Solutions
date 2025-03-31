#include <string.h>

void compressString(char str[], char compressed[]) {
    int len = strlen(str);
    int compressedIndex = 0;
    int i = 0;

    while (i < len) {
        char currentChar = str[i];
        int count = 0;

        while (i < len && str[i] == currentChar) {
            count++;
            i++;
        }

        compressed[compressedIndex++] = currentChar;
        if (count > 1) {
            char countStr[20];
            sprintf(countStr, "%d", count);
            for (int j = 0; countStr[j] != '\0'; j++) {
                compressed[compressedIndex++] = countStr[j];
            }
        }
    }
    compressed[compressedIndex] = '\0';

    // Compare lengths AFTER compression is complete
    if (compressedIndex >= len) { // If compressed is longer or same, return original
        strcpy(compressed, str); // Copy original string to compressed
    }
    strcpy(str, compressed); // Copy compressed or original to str
}