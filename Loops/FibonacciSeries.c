#include<stdio.h>
int main()
{
    int n,a=0,b=1,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        printf("%d ",a);  
        sum=a+b;
        a=b; 
        b=sum; 
        n--;
    }
   
    return 0;
}