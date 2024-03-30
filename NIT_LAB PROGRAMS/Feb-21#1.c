#include<stdio.h>

int main()
{
    
    float height,radius,surfaceArea;
    
    printf("Please enter the radius: ");
    scanf("%f",&radius);
    
    printf("Please enter the height: ");
    scanf("%f",&height);
    
    surfaceArea=2*3.14*radius*radius+2*3.14*radius*height;
    
    printf("Surface area of cylinder=%.2f",surfaceArea);
   
    
return 0;   
}