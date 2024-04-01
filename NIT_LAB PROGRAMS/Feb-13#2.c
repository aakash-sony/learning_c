#include<stdio.h>

void areaOfRectangle();
void areaOfSquare();

int main()
{
    areaOfRectangle();
    areaOfSquare();

}

void areaOfRectangle()
{
    int length=10,width=20;
    int area;

    area=length*width;
    printf("Area of Rectangle=%d\n",area);
}

void areaOfSquare()
{
    int side=5;
    int area;

    area=side*side;
    printf("Area of Square=%d",area);
}
