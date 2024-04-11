#include<stdio.h>
int main()
{
    int nr,nc,r,c,arr[10][10];
    printf("Enter number of rows and column: ");
    scanf("%d%d",&nr,&nc);
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("Enter [%d][%d] element: ",r,c);
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("%d\t",arr[c][r]);
        }
        printf("\n");
    }
    printf("\tTranspose Matrix: \n");
    printf("***********************************************\n");
    for(c=0;c<nc;c++)
    {
        for(r=0;r<nr;r++)
        {
            printf("%4d",arr[c][r]);
        }
        printf("\n");
    }
    return 0;
}