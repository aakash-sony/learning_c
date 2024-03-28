#include<stdio.h>


int main()
{
    int i,j,rows,space;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        // for(space=1;space<=(rows-1);space++)
        // {
        //      printf(" ");
        // }
        // for(j=1;j<=i;j++)
        // {
        //     printf(" *");
        // }
        printf("\n");
    }
    return 0;
}