#include<stdio.h>

int main()
{
    long n;
    int multiply=1;

    printf("Enter value of n: ");
    scanf("%d",&n);

    while(n>1)
    {
       multiply=multiply*n;
       n--;
    }
    printf("Factorial=%d",multiply);
}