#include <stdio.h>
int main(){
    int a[2]={5,2};
    int *b;
    b=a;
    printf("%d\n %d\n %d\n %d\n %d\n %d",a,&a,b,*b,*(b+1),&b);
    return 0;
}