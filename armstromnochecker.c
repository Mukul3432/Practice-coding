# include <stdio.h>
# include <math.h>
//cheacks if given no. is armstrong
int main(){
    int num,checker=0,backup;
    printf("------------------Armstrong number checker-------------------------------------\n");
    printf("enter number:-");
    scanf("%d",&num);
    backup=num;
    for(int i=0;i<=30;i++){
        checker+=(int) pow(num%10,3);
        num/=10;}
    printf("%d",checker);
    if (checker==backup){
        printf("armstrong number");}
    else{
        printf("not armstrong number");
        }
        return 0;

}