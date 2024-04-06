#include<stdio.h>

#define p printf
#define s scanf

void byDoWhileLoop(int n);
void byForLoop(int n);

int main()
{
  int n;
  p("Enter a number: ");
  s("%d",&n);
  byDoWhileLoop(n);
  byForLoop(n);

  return 0;
}
void byDoWhileLoop(int n)
{
    int temp=n;
    int count=0;
   do
   {
      n=n/10;
      count++;
   }while (n!=0);
   p("%d is a %d digit number\n",temp,count);
}
void byForLoop(int n)
{
    int temp=n;
   int count=0;
   if(n==0)count++;
   if(n<0)n=-n;
   for(int i=1;i<=n;n/=10)
   {
      count++;
   }
   p("%d is a %d digit number",temp,count);
}