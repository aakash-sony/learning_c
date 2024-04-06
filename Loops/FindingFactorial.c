#include<stdio.h>
#define p printf
#define s scanf

void bywhileLoop(int n);
void byForLoop(int n);
int main()
{
   int n;
   p("Enter a number: ");
   s("%d",&n);
   bywhileLoop(n);
   byForLoop(n);

   return 0;
}
void bywhileLoop(int n)
{
    int multiply=1;
    int temp=n;
    while (n>0)
    {
        multiply=multiply*n;
        n--;
    }
    p("Factorial of %d is %d\n",temp,multiply);
}
void byForLoop(int n)
{
    int multiply=1;
    for(int i=1;i<=n;i++)
    {
        multiply=multiply*i;
    }
    p("Factorial of %d is %d",n,multiply);
}