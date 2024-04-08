#include<stdio.h>
#include<math.h>

int main()
{
  int m,n;
  printf("Enter the base number: ");
  scanf("%d",&n);
  printf("Enter the power number: ");
  scanf("%d",&m);

  printf("Power=%0.f",pow(n,m));

  return 0; 
}