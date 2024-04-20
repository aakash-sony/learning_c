#include <stdio.h>
int main()
{
    int nc, nr, arr[10][10], i, j;
again:
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &nr, &nc);
    if (nr == nc)
    {
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("Element-[%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("The Matrix is: \n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                printf("%4d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\nSetting zero in upper triangular matrix: \n");
        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                if (i < j)
                {
                    printf("%3d", 0);
                }
                else
                {
                    printf("%3d", arr[i][j]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nNumber of rows and number of columns should be same.\n\n");
        goto again;
    }
    return 0;
}