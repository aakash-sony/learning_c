#include<stdio.h>

int main()
{
    float inches,centemeter;
    printf("Please Enter the value in centemeter: ");
    scanf("%f",&centemeter);
     inches=centemeter/2.54;
     printf("The value in inches=%f",inches);
     return 0;
}