#include<stdio.h>
int main()
{
    int size,i,arr[30],element,count=0;
     printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Which element do you want to search: ");
    scanf("%d",&element);

    for(i=0;i<size;i++)
    {
        if(element==arr[i])
        {
            printf("%d is available at %d index.\n",element,i);
            count++;
        }
    }
    if(count==0)
    printf("Number is not available in Array.");
    return 0;
}