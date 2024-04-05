#include<stdio.h>
#include<math.h>
int main() 
{
    int n,sqr,r,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    sqr=pow(n,2);
    while(sqr!=0)
    {
        r=sqr%10;
        sum=sum+r;
        sqr=sqr/10;
    }
    if(n==sum)
    {
        printf("Neon Number.");
    }
    else
    {
        printf("Not a neon number.");
    }
    
    
    return 0;
}