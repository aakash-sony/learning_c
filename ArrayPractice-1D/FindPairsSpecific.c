#include<stdio.h>
int main()
{
    int n,i,arr[30];
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
    for(i=0;i<n/2;i++)
    {
       printf("\n(%d %d)",arr[i],arr[n-i-1]);
    }
    if(n%2!=0)
    printf("\n(%d)",arr[i]);
    return 0;
}