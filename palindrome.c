#include <stdio.h>
int main(){
    int num,reverse=0;
    printf("enter number:-");
    scanf("%d",&num);
    int backup=num;
    while(num!=0){
        reverse=reverse*10+num%10;
        num/=10;
    } if (backup==reverse){
        printf("It is a palindrome");
    } else{
        printf("It is not palindrome");
    }
    return 0;
}