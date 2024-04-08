#include<stdio.h>
int main() 
{
    int n,ele,i,arr[20],count=0;
    again:
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    if(n>0)
    {
      for(i=0;i<n;i++)
      {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
      }
      printf("The Array is: ");
      for(i=0;i<n;i++)
     {
        printf("%d ",arr[i]);
     }
     printf("\nEnter the number that you want to search: ");
     scanf("%d",&ele);
     for(i=0;i<n;i++)
     {
        if(arr[i]==ele)
        {
            count++;
          printf("%d is present at index %d.\n",ele,i);
        }
     }
     if(count==0)
     printf("Number is not available in the array.");
     
    }
    else
    {
        printf("Invalid Array Size.\n");
        goto again;
    }

     return 0;
}