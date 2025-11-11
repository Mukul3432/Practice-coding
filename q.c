#include <stdio.h>

// Define the height of the triangle
#define TRIANGLE_HEIGHT 5

int main() {
    int i;
    char j[6];
    for(i=0;i<5;i++){
        j[i] = '*';
        j[i+1] = '\0'; // Null-terminate the string after each asterisk
        printf("%s\n",j);} // Print the string and a newline
    // Use more descriptive variable names
    int lineIndex;
    // Buffer needs to be height + 1 for the null terminator
    char lineBuffer[TRIANGLE_HEIGHT + 1];
    for(lineIndex = 0; lineIndex < TRIANGLE_HEIGHT; lineIndex++){
        lineBuffer[lineIndex] = '*';
        lineBuffer[lineIndex + 1] = '\0'; // Null-terminate the string
        printf("%s\n", lineBuffer);      // Print the current line
    }
    return 0;
}
