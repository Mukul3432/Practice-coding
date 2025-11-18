#include <stdio.h>

int main() {
    char buffer_printf[100];
    char buffer_gets[100];

    printf("--- Comparing printf and gets ---\n\n");

    // Using printf to display a string
    printf("Enter a string for printf (max 99 chars): ");
    // In a real scenario, you'd use scanf or fgets to read input for printf to display.
    // For this comparison, we'll just demonstrate printf's output capability.
    sprintf(buffer_printf, "Hello from printf!");
    printf("printf output: %s\n\n", buffer_printf);

    // Using gets to read a string
    printf("Enter a string for gets (BE CAREFUL, NO BOUNDS CHECKING!): ");
    gets(buffer_gets); // WARNING: gets is unsafe and should not be used in new code.
                       // It does not check buffer boundaries, leading to buffer overflows.
    printf("gets output: %s\n\n", buffer_gets);

    printf("--- Differences ---\n");
    printf("printf: Used for formatted output to the console. It's safe when used correctly with format specifiers.\n");
    printf("gets: Used for reading a line of text from standard input. It is UNSAFE because it doesn't prevent buffer overflows.\n");
    printf("Recommendation: Always use fgets instead of gets for input, as fgets allows specifying the buffer size.\n");

    return 0;
}
