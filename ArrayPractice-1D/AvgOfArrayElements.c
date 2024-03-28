#include<stdio.h>
int main()
{
    int i,size,arr[40],sum=0;
    float avg;
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/size;
    printf("Avg of array elements is: %.2f",avg);
    return 0;
}