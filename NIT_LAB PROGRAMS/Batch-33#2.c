#include<stdio.h>

int main()
{
    int num;

    printf("Please enter the number: ");
    scanf("%d",&num);

    (num>0)&&printf("Given number is positive.");
    (num<0)&&printf("Given number is negative.");
    (num==0)&&printf("Given number is 0.");

    return 0;
}