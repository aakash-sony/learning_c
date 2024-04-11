#include<stdio.h>
int main()
{
    int arr[20],n,i,pos;
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
    printf("At which position do you want to delete the element: ");
    scanf("%d",&pos); //3
    if(pos>0&&pos<=n)     //1,5,6,7,8
    {
       for(i=pos;i<n;i++)  //3<5
       {
         arr[i-1]=arr[i];
       }
       n--;
       printf("The Array after the deletion: ");
       for(i=0;i<n;i++)
      {
        printf("%d ",arr[i]);
      }  
    }
    else
    {
        printf("Invalid Position.");
    }
     return 0;    
}