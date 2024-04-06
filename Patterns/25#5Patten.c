#include<stdio.h>
int main()
{
    int n,j,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      int a=0,b=1,sum=0;
      for(j=1;j<=i;j++)
        {
          printf("%d ",a);
           sum=a+b;
           a=b;
           b=sum;
            
        }
        printf("\n");
    }
return 0;
}