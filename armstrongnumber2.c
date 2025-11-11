#include <stdio.h> 
#include <math.h>
int main() {
    int num,backup, sum = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    backup = num;
    while (num != 0) {
        sum += pow(num%10,3); // Sum of cubes of digits
        num /= 10;
    }if (sum == backup) {
        printf("%d is an Armstrong number.\n", backup);
    } else {
        printf("%d is not an Armstrong number.\n", backup);
    }

    return 0;
}