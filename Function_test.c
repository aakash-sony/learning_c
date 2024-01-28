#include <stdio.h>
float printAreaOfCircle(int radius); // function decalaration
int printAreaOfSquare(int side);
int printAreaOfRectangle(int height, int width);
int main()
{

    int radius, side, height, width;
    float areaOfCircle;
    int areaOfSquare;
    int areaOfRectangle;
    printf("Please enter the radius of the circle:");
    scanf("%d", &radius);
    areaOfCircle = printAreaOfCircle(radius);
    printf("The area of circle is %f\n", areaOfCircle);

    printf("Please enter the side of the square:");
    scanf("%d", &side);
    areaOfSquare = printAreaOfSquare(side);
    printf("The area of square is %d\n", areaOfSquare);

    printf("Please enter the height and width of the rectangle:");
    scanf("%d%d", &height, &width);
    areaOfRectangle = printAreaOfRectangle(height, width);
    printf("The area of rectangle is %d", areaOfRectangle);

    return 0;
}

float printAreaOfCircle(int radius)
{ // function defination
    return ((3.14) * radius * radius);
}

int printAreaOfSquare(int side)
{
    return (side * side);
}

int printAreaOfRectangle(int height, int width)
{
    return (height * width);
}
