#include<stdio.h>
// used to check is student passed or failed based on marks entered
int main(){
    int marks;
    printf("Enter marks(0-100):-");
    scanf("%d",&marks);
    // if (marks<30) {
    //     printf("fail"); 
    // } else if(marks>=30 && marks<=100){
    //     printf("pass");
    // } else{
    //     printf("invalid marks");
    // }
    // return 0;
    marks<30 ? printf("C") : marks>=30 && marks<70 ? printf("B") : marks>=70 && marks<90 ? printf("A") : marks>=90 && marks<=100 ? printf("A+") : printf("invalid marks");
    return 0;
}