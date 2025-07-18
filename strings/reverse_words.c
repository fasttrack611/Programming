#include <stdio.h>
#include <string.h>

// Function to reverse characters between two pointers
void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words in a sentence
void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str;

    // Step 1: Reverse each word
    while (*temp) {
        if ((word_start == NULL) && (*temp != ' ')) {
            word_start = temp;
        }
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    // Step 2: Reverse the entire string
    reverse(str, temp - 1);
}

int main() {
    char sentence[] = "I love embedded systems";

    printf("🔹 Original: %s\n", sentence);
    reverseWords(sentence);
    printf("🔁 Reversed: %s\n", sentence);

    return 0;
}

