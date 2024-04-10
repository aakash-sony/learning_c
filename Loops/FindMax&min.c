#include<stdio.h>

#define p printf
#define s scanf

void byDoWhileLoop(long n);
void byForLoop(int n);

int main()
{
    int n;
    p("Enter a number: ");
    s("%ldd",&n);
    byDoWhileLoop(n);

    return 0;

} 

void byDoWhileLoop(long n)
{
    int r,max=0,min=9;
    if(n<0)n=-n;
    do
    {
      r=n%10;
      if(r>max)max=r;
      if(r<9)min=r;
      n=n/10;
    } while(n!=0);
    p("Max=%d,Min=%d",max,min);
}