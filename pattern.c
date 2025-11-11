#include <stdio.h>
// Example program to print a pyramid pattern in C
int main() {
    int rows = 10; // Number of rows for the pyramid
    char row[rows+1];
    row[rows] = '\0'; // Null-terminate the string
    for (int i = 0; i <= rows-1; i++) {
        row[i] = ' ';
    }
    for (int j = 0; j <= rows/2-1 ; j++) {
        row[rows/2+j] = '*';
         row[rows/2-j] = '*';
        printf("%s\n",row);
    }
    return 0;
}
