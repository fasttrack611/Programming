#include <stdio.h>

int main() {
    // Array of pointers to constant strings
    const char *messages[] = {"Read-only", "Text"};

    printf("🔹 Original Messages:\n");
    for (int i = 0; i < 2; i++) {
        printf("  • messages[%d] = %s\n", i, messages[i]);
    }

    // Reassigning pointer is allowed (pointer is not const)
    messages[0] = "New";  // ✅ Valid: pointer changes, not the string

    // Attempting to modify the string itself would be invalid:
    // strcpy(messages[0], "Edit");  ❌ Undefined behavior (read-only memory)

    printf("\n🔹 After Pointer Reassignment:\n");
    for (int i = 0; i < 2; i++) {
        printf("  • messages[%d] = %s\n", i, messages[i]);
    }

    return 0;
}

