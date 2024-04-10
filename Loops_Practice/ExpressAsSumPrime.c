#include<stdio.h>

int main()
{
    int n,i,j,count=0;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            for(j=2;j<=(n-i)/2;j++)
            {
                if((n-i)%j==0)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==0)
        {
            printf("%d=%d+%d\n",n,i,n-i);
        }
        count=0;
    }
    return 0;
}