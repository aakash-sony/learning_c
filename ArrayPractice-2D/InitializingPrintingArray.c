#include<stdio.h>
int main()
{
    int nr,nc,i,j;
    int arr[20][30];
    printf("Enter number of rows and number of columns: ");
    scanf("%d %d",&nr,&nc);
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("Enter the [%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n2D Array is: \n");
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}