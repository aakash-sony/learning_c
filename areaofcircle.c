#include <stdio.h>

int main()
{
    int radius;
    float area;
    printf("Please enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("The area of the circle of given radius is: %f.", ((3.14) * radius * radius));
    return 0;
}