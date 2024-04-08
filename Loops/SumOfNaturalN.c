#include<stdio.h>
int main() 
{
    int n,i=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n>=i)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum=%d",sum);
    return 0;
}