#include<stdio.h>

int main()
{
    int num,i=1;

    printf("Enter a num: ");
    scanf("%d",&num);
     
     while (num>=i)
     {
        printf("%3d",num); 
        num--;
     }
     return 0;
     
}