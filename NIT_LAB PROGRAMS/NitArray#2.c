#include<stdio.h>
int main()
{
    int arr[20],n,i,j,temp,count=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        temp=arr[i];
        if(temp=='*')continue;
        for(j=0;j<n;j++)
        {
            if(temp==arr[j])
            {
                count++;
                arr[j]='*';
            }
        }
        if(count!=0)
         {
             printf("\n%d occures %d times",temp,count);
         }
    }
    
return 0;    
}