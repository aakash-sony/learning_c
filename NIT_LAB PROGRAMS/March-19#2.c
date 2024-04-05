#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>9)
    {
        while(n!=0)      
        {
            r=n%10;      
            sum=sum+r;     
            n/=10;       
        }
        n=sum;      
        sum=0;        
    }
    printf("Sum=%d",n);
    
    return 0;
}