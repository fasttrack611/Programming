#include <stdio.h>

#pragma pack(0)  // Enforce 1-byte alignment

// This structure is tightly packed: no padding between members
struct TightPacked {
    char a;   // 1 byte
    int b;    // 4 bytes (normally would be aligned at offset 4)
};            // Total: 5 bytes due to packing

#pragma pack()  // Reset packing to default

int main() {
    struct TightPacked tp;

    tp.a = 'Z';
    tp.b = 0x12345678;

    printf("Size of TightPacked struct: %zu bytes\n", sizeof(struct TightPacked));
    printf("Contents:\n");
    printf("  a: %c\n", tp.a);
    printf("  b: 0x%X\n", tp.b);

    // Byte-level inspection
    unsigned char *ptr = (unsigned char *)&tp;
    printf("\nMemory layout:\n");
    for (size_t i = 0; i < sizeof(struct TightPacked); ++i) {
        printf("Byte %zu: 0x%02X\n", i, ptr[i]);
    }

    return 0;
}

