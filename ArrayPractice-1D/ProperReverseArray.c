#include<stdio.h>
int main()
{
    int i,temp;
    int arr[8]={2,5,4,90,77,44,5,7};
    printf("Before Reversing the Array: ");
    for(i=0;i<8;i++)
    {
        printf("%d,",arr[i]);
    }
    for(i=0;i<8/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[7-i];   //third variable
        arr[7-i]=temp;
        // arr[i]=arr[7-i]+arr[i];
        // arr[7-i]=arr[i]-arr[7-i];       without third variable
        // arr[i]=arr[i]-arr[7-i];
    }
    printf("\nAfter the reversing Array: ");
    for(i=0;i<8;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}