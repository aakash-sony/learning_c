#include <stdio.h>

int main()
{

    int arr[10];
    int n, i;
    printf("How many element do you want to enter in the array?");
    scanf("%d", &n); 

    for (i = 0; i < n; i++)
    {
        printf("Enter %dth element\n", (i+1));
        scanf("%d", &arr[i]);
    }

   
    printf("\n\nYour entered elements are: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    return 0;
}


