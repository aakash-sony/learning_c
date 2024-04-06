#include<stdio.h>
int main() 
{
    long n;
    int s1=0,s2=0,r1,r2;
    printf("Enter a Number: ");
    scanf("%ld",&n);
    
    while(n!=0)
    {
        r1=n%10;
        s1=s1+r1;
        n=n/10;
        r2=n%10;
        s2=s2+r2;
        n=n/10;
    }
    if(s1==s2)
    {
        printf("Alternate Digits Sum are same.");
    }
    else
    {
        printf("Alternate Digits are not same");
    }
 
    
    return 0;
}