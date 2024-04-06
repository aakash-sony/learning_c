#include<stdio.h>
int main()
{
    int n,i,j,a,t;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=n-1;
        t=i;
        for(j=1;j<=i;j++)
        {
          printf("%d ",t); 
          t=t+a;
          a--;
        }
        printf("\n");
    }
    
     return 0;
}