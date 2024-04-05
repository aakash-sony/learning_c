#include<stdio.h>

void pattern1(int n);
void pattern2(int n);
void pattern3(int n);
void pattern4(int n);
void pattern5(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    
   return 0;
}
void pattern1(int n)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern2(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void pattern3(int n)
{
    int i,j,a=1;
    for(i=1;i<=n;i++)
    { 
        a=1;
        for(j=1;j<=i;j++)
        {
           printf("%d",a);
           a=a+2;
        }
        printf("\n");
    }
}
void pattern4(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
}
void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
}