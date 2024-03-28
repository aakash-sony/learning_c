#include<stdio.h>

int main()
{
    int n,i,max,sMax;
    int arr[100];
    printf("How many elements do you want to enter: ");
    scanf("%d",&n);
    printf("Enter the total %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            // sMax=max;
            max=arr[i];
        }
        printf("\nMax=%d",max);
    }

    return 0;
}