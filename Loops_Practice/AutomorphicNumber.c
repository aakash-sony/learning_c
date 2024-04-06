#include<stdio.h>
#include<math.h>
int main() 
{
    long n,m;
    int b,temp,count=0;
    printf("Enter a number: ");
    scanf("%ld",&n);
    m=n*n;
    printf("Square=%ld\n",m);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Total Digit=%d\n",count);
    b=m%(int)pow(10,count);
    if(b==temp)printf("Automorphic Number.");
    else printf("Not a Automorphic Number.");
    
   return 0;    
}