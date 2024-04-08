#include <stdio.h>

void main()
{

    int arr[10][10];
    int row, col;
    int i, j;
    printf("Please enter the number of row and column : ");
    scanf("%d%d", &row, &col);

    for (i = 0; i < row; i++)
    {

        for (j = 0; j < col; j++)
        {
            printf("Enter [%d][%d] index item: \n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {

        for (j = 0; j < col; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    
}