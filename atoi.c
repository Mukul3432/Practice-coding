
#include <stdio.h>
#include <stdlib.h> // Required for atoi

int main() {
    char str[20]; // Declare a character array (string)
    int num;      // Declare an integer variable

    printf("Enter a string of digits: ");
    scanf("%s", str); // Read the string from the user

    // Convert the string to an integer using atoi()
    num = atoi(str);

    printf("The string you entered is: %s\n", str);
    printf("The integer value after atoi() is: %d\n", num);

    // Example with a string that contains non-digit characters
    char mixedStr[] = "123abc456";
    int mixedNum = atoi(mixedStr);
    printf("\nExample with mixed string \"%s\":\n", mixedStr);
    printf("The integer value after atoi() is: %d\n", mixedNum); // Output will be 123

    // Example with a string that starts with non-digit characters
    char nonDigitStart[] = "hello123";
    int nonDigitNum = atoi(nonDigitStart);
    printf("\nExample with non-digit start string \"%s\":\n", nonDigitStart);
    printf("The integer value after atoi() is: %d\n", nonDigitNum); // Output will be 0

    return 0;
}
