#include<stdio.h>
int main()
{
    float radius,volume;
    
    printf("****Welcome to the Sphere Volume Calculator!*****\n");
    
    printf("Enter the radius of sphere: ");
    scanf("%f",&radius);
    
    volume=3.14*radius*radius*radius*4.0/3;
    
    printf("Volume of Sphere is=%.2f",volume);
    
  
    
    return 0;
}