#include<stdio.h>
int main()
{
    int n,i,j,temp,arr[30];
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d Element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]==0&&arr[j]!=0)
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
    }
    printf("\nThe Updated Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}