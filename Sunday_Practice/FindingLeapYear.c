#include<stdio.h>

int main()
{
    int year;

    puts("Enter a year: ");
    scanf("%d",&year);

    if(year%4==0&&year%100!=0||year%400==0)
    {
        puts("Leap year.");
    }
    else{
        puts("Common Year.");
    }
}