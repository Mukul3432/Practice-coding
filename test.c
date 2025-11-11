#include <stdio.h>
 int main() {
    int a[] = {1, 2, 3, 4, 5},b;
    b=sizeof(a)/sizeof(a[0]);
    printf("%i",b);

    
    return 0;
 }
