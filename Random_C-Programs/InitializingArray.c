#include<stdio.h>

void initializeArray(int arr[],int size);
int main()
{
  int arr[20],size;
   printf("Enter the Array size: ");
   scanf("%d",&size);

   initializeArray(arr,size);

   
   return 0;

}
void initializeArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
   {
     printf("Enter the %d element: ",i+1);
     scanf("%d",&arr[i]);

   }
}