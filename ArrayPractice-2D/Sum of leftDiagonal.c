#include <stdio.h>
int main()
{
    int nc, nr, arr[10][10], i, j, sum = 0;
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

        for (i = 0; i < nr; i++)
        {
            for (j = 0; j < nc; j++)
            {
                if (i + j == nr - 1)
                    sum += arr[i][j];
            }
        }
        printf("\nSum of left diagonal is: %d", sum);
    }
    else
    {
        printf("Number of rows and number of columns should be same.\n\n");
        goto again;
    }
    return 0;
}