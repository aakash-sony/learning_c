#include<stdio.h>

int main()
{
  
   float radius,perimetre;
   printf("Please Enter the Radius : ");
   scanf("%f",&radius);
   perimetre=2*3.14*radius;
   printf("The Perimetre of the Circle is %.2f :",perimetre);
    return 0;
}