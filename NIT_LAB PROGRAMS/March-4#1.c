#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter the value of three sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        if(a==b||b==c||a==c)
        {
            printf("Isosceles Triangle.");
        }
        if(a==b&&a==c)
        {
            printf("Equilateral Triangle.");
        }
        if(a!=b&&a!=c&&b!=c)
        {
            printf("Scalene Triangle.");
        }
    }
    else
    {
        printf("Not a valid Triangle.");
    }

  return 0;
}