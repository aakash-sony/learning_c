#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=i;
        for(int j=1;j<=n;j++)
        {
            if(a>5)
            {
                a=1;
                printf("%d  ",a++);
            }
           else
           {
             printf("%d  ",a++);
           }
        }
        printf("\n");
    }
    
    return 0;
}