#include<stdio.h>

void findDigitPosition(int n);

int main()
{
    int n,dgt,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    m=n;
    printf("Enter the digit to find the position: ");
    scanf("%d",&dgt);

    findDigitPosition(n);
    return 0;
}
void findDigitPosition(int m)
{
    int count,dgt;
     do
     {
        count++;
        m=m/10;

     } while (m!=0);
     while (m)
     {
         if(m%10==dgt)
        {
           printf("%d is at %d position",dgt,count);
        }
     }
     
    
     
}