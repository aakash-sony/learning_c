#include<stdio.h>
void checkingPalindrome(int arr[],int size);

int main()
{
    int size,i,arr[30];
    printf("How many elements do you want to enter?: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
     printf("The Array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
   
   checkingPalindrome(arr,size);
   return 0;
     
}
void checkingPalindrome(int arr[],int size)
{
    int count=0;
    for(int i=0;i<=size/2&&size!=0;i++)
    {
        if(arr[i]!=arr[size-i-1])
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("\nIt's a Palindrome Array.");
    }
    else{
        printf("\nNot a Palindrome Array.");
    }
}