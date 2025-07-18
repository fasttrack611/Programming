#include <stdio.h>

// Function to reverse characters in a string using two pointers
void reverse(char *str) {
    char *end = str;

    // Move 'end' to point to the null terminator
    while (*end) end++;

    end--; // Step back to the last character (skip '\0')

    // Swap characters from both ends moving toward the center
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

