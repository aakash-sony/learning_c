#include<stdio.h>

int main()
{
    int n,multiply=1;

    printf("Please enter the number for finding factorial: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       multiply=multiply*i;
    }
    printf("Factorial of given number is= %d",multiply);

    return 0;
}