#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of circle is:- %f", PI*radius*radius);
    return 0;
}
