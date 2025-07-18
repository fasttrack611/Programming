#include <stdio.h>

int stringLen(char *str) {
    int len = 0;
    char *start = str;  // Save original pointer for printing later

    while (*str != '\0') {
        len++;
        str++;
    }

    printf("%s.. len=%d\n", start, len);  // Print original string
    return len;
}

void strCopy(const char *src, char *dest) {
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';  // Important: null-terminate the destination string
}

int main() {
    char dest[15];
    char *ptr = "hellp world";

    printf("\nOriginal String ::%s\n", ptr);

    stringLen(ptr);          // Prints length and original string
    strCopy(ptr, dest);      // Copies string to dest

    printf("\nCopied: %s\n", dest);  // Display copied string
    return 0;
}
