#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],sumArr[5];
    int i;
    printf("Enter the 5 elements for Ist Array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the 5 elements for 2nd Array: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++)
    {
        sumArr[i]=arr1[i]+arr2[i];
        printf("\nIn Third Array elements at %d index is %d",i,sumArr[i]);
    }
    return 0;
}