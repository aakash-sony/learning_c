#include<stdio.h>
int main()
{
    int arr[12][12];
    int i,j,nr,nc,sum=0;
    printf("Enter the number of rows and column: ");
    scanf("%d%d",&nr,&nc);
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("Enter [%d][%d] element: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nThe 2D Array is: \n");
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%d  ",arr[i][j]);
            sum=sum+arr[i][j];
        }
        printf("Sum=%d",sum);
        printf("\n");
        sum=0;
    }
    return 0;
}