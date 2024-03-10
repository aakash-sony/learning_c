#include<stdio.h>

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);

    if(num==0)
    {
        puts("Given number is 0.");
    }
    else if(num/2*2==num)
    {
        puts("Even.");
    }
    else
    {
        puts("Odd.");
    }
}