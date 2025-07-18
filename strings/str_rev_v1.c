#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseStrPointer(const char *str) {
    int len = strlen(str);
    char *rev = malloc(len + 1);
    if (!rev) exit(EXIT_FAILURE);

    const char *src = str + len - 1;
    char *dst = rev;

    while (len--)
        *dst++ = *src--;
    
    *dst = '\0';
    return rev;
}

int main() {
    const char *data = "WaveDigitech.com";
    char *reversed = reverseStrPointer(data);

    printf("Original: %s\nReversed: %s\n", data, reversed);
    free(reversed);
    return 0;
}
