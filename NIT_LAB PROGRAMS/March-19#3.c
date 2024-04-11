#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<n;i++)      
    {
        if(n%i==0)     
        {
            sum=sum+i;   
        }
        
    }
    if(sum==n)
    {
        printf("Perfect Number.");
    }
    else
    {
        printf("Not a Perfect Number.");
    }
    
    
    return 0;
}