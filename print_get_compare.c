#include <stdio.h>

int main() {
    char b[50];
    char a[50];
    printf("--- Comparing printf and gets ---\n\n");
    printf("Enter a string for scanf (max 99 chars): ");
    scanf("%s", a);
    printf("scanf output: %s\n", a);
    // gets(b);
    // printf("gets output: %s", b);
    // Note: 'gets' is unsafe and has been removed from the C11 standard onwards.
    return 0;
}
