#include <stdio.h>
//This program calculates the average of three numbers.
int main(){
    int num1,num2,num3;
    printf("enter numbers 3 numbers(for e.g 3 5 6)");
    scanf("%d,%d,%d",&num1,&num2,&num3);
    printf("%d\n",(num1+num2+num3)/3);
    num1>num2 ? printf("%d",num1):printf("%d",num2);
    return 0;
}