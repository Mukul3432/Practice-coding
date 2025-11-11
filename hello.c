#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &number); // Action: Get input
    } while (number < 1 || number > 10); // Condition: Check if input is invalid

    printf("You entered a valid number: %d\n", number);
    
    return 0;
}