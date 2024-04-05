#include<stdio.h>
int main()
{
    int n,r,rev,m,i=1;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;

    while(m>=i)
    {
        r=m%10;
        rev=rev*10+r;
        m=m/10;
        i++;
    }

    if(n==rev)
    {
        printf("Number is Pallindrome");
    }
    else
    {
        printf("Number is not Pallindrome.");
    }
    
   return 0;
}